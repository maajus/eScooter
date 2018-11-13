//ebike by J.Mazeika 2014

#include <Arduino.h>
#include "main.h"
#include "functions.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"
#include <HardwareSerial.h>

//add display
Adafruit_SSD1306 display(0);

//voltage read variables
#define NUM_SAMPLES 20   // number of analog samples to take per reading
int sum_v = 0; // sum of voltage samples taken
unsigned char sample_count = 0; // current sample number
float voltage = 0.00; // calculated voltage

// throttle variables
int throttleOut = 1000; // variable to store the servo position 
int throttleReq = 1050; // the throttle setting requested by user via pedal
int throttleCurrent = 0; // throttle setting to achieve current limit
int throttlePhase = 0; // throttle setting to achieve phase current limit
int throttleExp = 2;

//current variables
long current_smooth;
int sum_c = 0; // sum of current samples taken
long phaseCurrent = 0; // phase current variable; 10X actual
long current = 0; // variable for current from shuntInputPin
int currentMax = 100; // maximum current *10 (set to 400 for 40 amps)
const double currentScaling = 178.9351403679;
const double currentOffset = 9.1145208132;
long shunt_read = 0; //Raw ADC value

//temp variables
int Temp;

Servo myservo; // create servo object to control a servo 
int PotValue = 0; // variable to store the value coming from the pot

//Speedometer
//CONDITIONAL, CONSTANT PARAMETERS:
const unsigned int debounceSwitchms = 10; //Our routine will ignore signals that come closer together than this amount of ms
const unsigned long maxTime = 3000000; //The amount of microseconds before going into waiting mode.
const unsigned int debounce_delay = 80; //how many loops before 
const byte updateSpeed = 1;
const byte updateDiameter = 2;
volatile unsigned long hitTime;
unsigned long lastTime; //Track the time of the previous signal so we can calculate time elapsed since.
unsigned long microsSince; //for determining idleness. 0 <= ul <= 4,294,967,295
unsigned long periodMicroSeconds;
float speedFloat; //we use floating point math for maximum precision.
//float  circumference = 2135;
float circumference = 60;
word speedInteger; //this we will convert to a string to display.
byte precision; //to keep track of roughly how precise the frequency will be.
word delayCounter = 0; //can count 0 to 65535

boolean armed = false;
boolean TH_CONNECTED = false;
boolean display_type = true;
int ledState = LOW; // ledState used to set the LED

//statistics variables
unsigned int max_speed = 0;
long max_current = 0;
unsigned int min_voltage = 0;


void recordTime() { //interrupt routine called when reed switch is on
    hitTime = micros(); //reads a clock in microseconds
}

void setup() {

    //init dislpay
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // initialize with the I2C addr 0x3D (for the 128x64)
    display.clearDisplay();
    display.dim(true);
    display.setTextSize(2);
    display.setTextColor(WHITE);
    display.setCursor(0, 0);
    display.println("WELCOME TO");
    display.setTextSize(4);
    display.setCursor(39, 18);
    display.println("JM");
    display.setTextSize(2);
    display.setCursor(33, 50);
    display.println("eBike");
    display.display();

    // initialize the pins:
    pinMode(buttonPin, INPUT);
    pinMode(buttonPin1, INPUT);
    pinMode(ledPin, OUTPUT);
    pinMode(ledPin1, OUTPUT);
    pinMode(melodyPin, OUTPUT); //buzzer pin
    pinMode(switchPin, INPUT); //reed switch for speed
    pinMode(brakePin, INPUT); //input pin for brake switches
    digitalWrite(brakePin, HIGH); //pull up brake switches

    Serial.begin(9600);
    Serial.println("JM ebike controller");
    currentMax = EEPROMReadInt(addr); //read max current setting from EEPROM
    //currentMax = 155;
    blinkled_times(currentMax / 100); //show amp setting on LED
    if (temp() == 500) {
        TH_CONNECTED = false;
        Temp = 0;
    }// thermistor not connected
    else TH_CONNECTED = true;

    //init hall sensor
    digitalWrite(switchPin, HIGH); //pullup for hall
    //circumference = diametermm * ten_thousand_pi; //calculate circumference in micrometers whenever we change the diameter
    attachInterrupt(switchPinInt, recordTime, FALLING); //Go to recordTime whenever interrupt switchPinInt goes from high to low
    precision = 0; //set as first time switch
    //init servo control
    myservo.attach(13); // attaches the servo on pin 13 to the servo object
}

void loop() {
    if (armed) digitalWrite(ledPin1, HIGH);
    else digitalWrite(ledPin1, HIGH);
    //read motor temp
    if (TH_CONNECTED) Temp = temp(); //read temp only if thermister connected
    if (Temp < 50) { //let arm motor if temp if below 50
        armed = true;
        //blinkled(250); // show working state on status LED
    } else {
        armed = false; //stop motor if temp reaches 50
        //blinkled(100);
        TH_CONNECTED = false; //dont allow to restart motor
        Temp = 100;
    }
    //current set mode
    if ((digitalRead(buttonPin) == LOW)&&(digitalRead(buttonPin1) == LOW))
        currentMax = set_current(currentMax); //enter to set mode when both buttons pressed


    //calculate speed
    if (hitTime > 0) {//There's a 1 in 4 billion chance hitTime is zero but represents an actual reading.
        if (precision == 0) {//this is first time switch, so no reference, so only set precision flag and record time.
            precision = 1; //so we don't end up here next time
            lastTime = hitTime; //record now for reference next time.
        } else {
            //periodMicroSeconds = hitTime - lastTime; //if timer has overflowed once since last time, ok since this subtraction will overflow back.
            if ((hitTime - lastTime) > debounceSwitchms * 1000) {//debounce by rejecting too-fast times
                periodMicroSeconds = hitTime - lastTime;
                precision = 1; //Set our flag so we know we have a valid period
                lastTime = hitTime; //record now for reference next time.
            }
        }
        hitTime = 0; //skip the above routine until another hit.

    }
    //We don't want to read micros every trip through this loop--Reading micros causes interrupt issues.
    // So, if we increase a 16-bit (word) variable by one every trip, it will only overflow back to zero once every 65536 (2^16) trips.
    delayCounter++;
    if (delayCounter > debounce_delay) {
        delayCounter = 0;
        microsSince = micros() - lastTime; //Keep track of idleness.
        // if the LED is off turn it on and vice-versa:
        if (ledState == LOW)
            ledState = HIGH;
        else
            ledState = LOW;

        // set the LED with the ledState of the variable:
        digitalWrite(ledPin, ledState);
    }
    //Serial.println(delayCounter);
    //Serial.println(microsSince);
    if (precision > 0 && microsSince > maxTime) {//It's been more than maxTime since the last hit, so go back into waiting mode
        precision = 0; //set as first time switch
        periodMicroSeconds = 0;
    }
    //at this point, speedFloat is the circumference of the wheel in micrometers
    speedFloat = (circumference * 10) / (float) periodMicroSeconds; //now it is speed in km/s
    speedFloat *= 3600;
    //speedFloat = speedFloat * 2.23693; //Since the above leaves us with cm/microsecond
    speedInteger = (word) speedFloat; //round to a number between 0 and 65535

    //voltage read
    sample_count++;
    sum_v += analogRead(voltagePin); // take a number of analog samples and add them up
    sum_c +=current;
    if (sample_count > NUM_SAMPLES) {
        sample_count = 0;
         voltage = (((float) sum_v / (float) NUM_SAMPLES * 5) / 1024 * 11.9544463564);
        current_smooth=((float) sum_c / (float) NUM_SAMPLES);
        sum_v = 0;
        sum_c = 0;
    }
    

    //delay(5);
    //current read
    // read the amplified shunt voltage from the current monitor, scale it, offset it
    shunt_read = analogRead(shuntInputPin);
    //shunt_read = 100);
    //shunt_read = analogRead(shuntInputPin);
    if (shunt_read > 0) current = (shunt_read * currentScaling / 100) + currentOffset;
    else current = 0;
    current = max(0, current); // do not allow negative currents, it causes errors later!
    //delay(5);
    PotValue = analogRead(potPin); // read the value from the pot
    throttleReq = map(PotValue, 215, 850, throttleMin, throttleMax - 100); //change range 200-800 to 1000-2000
    if (PotValue > 225) { // send 1000 if no throttle is applied, else start from 1100. For ESC range.
        throttleReq = 1100 + pow((throttleReq - 1000), throttleExp) / (pow((throttleMax - 1100), (throttleExp - 1)));
    }
    throttleReq = min(throttleReq, throttleMax); // limit max throttle
    throttleReq = max(throttleReq, throttleZero); //limit min throttle

    // this routine computes the throttle output required for current control
    throttleCurrent = throttleOut - currentGain * (current - currentMax) / 100;
    throttleCurrent = max(throttleCurrent, throttleMin);

    // compute the phase current phase current = shunt current/throttle
    phaseCurrent = current * (throttleMax - throttleMin) / max((throttleOut - throttleMin), 24); //set last term to be appx 2.5% of throttle max - throttle min
    throttlePhase = throttleOut - phaseGain * (phaseCurrent - phaseMax) / 100;
    throttlePhase = max(throttlePhase, throttleMin);
    throttleCurrent = min(throttleCurrent, throttlePhase); //choose lower of phase or current throttle

    if (digitalRead(brakePin) == LOW) throttleReq == throttleZero; //turn off motor when brakes are applied
    throttleOut = min(throttleReq, throttleCurrent); // use the lower of current-limited or user requested throttle value

    if (armed)myservo.writeMicroseconds(throttleOut); // send throttle value to ESC if system allowed to arm
    else myservo.writeMicroseconds(0);

    //calculate statistics
    if (speedInteger > max_speed) max_speed = speedInteger;
    if (current > max_current) max_current = current;
    if (voltage < min_voltage) min_voltage = voltage;

    //select display screen
    if (digitalRead(buttonPin) == LOW) {
        if (display_type) display_type = false;
        else display_type = true;
    }

    if (display_type) {

        //display main information on screen
        
        //display throttle
        display.clearDisplay();
        display.setTextSize(2);
        display.setCursor(0, 0);
        int throttleReq_p = map(throttleReq, throttleMin, throttleMax, 0, 100);
        int throttleOut_p = map(throttleOut, throttleMin, throttleMax, 0, 100);
        display.println( String(throttleReq_p) + "/" + String( throttleOut_p));

        //display temp
        /*
        String string = String((int) Temp);
        display.setTextSize(2);
        display.setCursor(0, 0);
        if (TH_CONNECTED) display.println(string+"C");
        else display.println("temp N/A C");
         */

        //display arming
        display.setTextSize(2);
        display.setCursor(80, 0);
        //display.setCursor(95, 0);
        if (armed) display.println(" " + String(currentMax / 10) + "A");
        else display.println("N/A");
        
        String string;
        //display current
        //display.setTextColor(WHITE);
        //current = 1000;
        current = runMedian(current);
        if (current >= 1000) string = "99";
        else string = String( int(current / 10));
        display.setTextSize(3);
        display.setCursor(0, 21);
        display.println(string);
        if (current >= 1000) string = ".9";
        else string = "." + String( current - int((current / 10)*10));
        display.setTextSize(2);
        if (((int) current / 10) > 9) display.setCursor(30, 29);
        else display.setCursor(15, 29);
        //display.setCursor(30, 27);
        display.println(string);
        delay(10);


        //display voltage
        string = String((int) voltage);
        display.setTextSize(2);
        display.setCursor(0, 50);
        display.println(string);
        string = "." + String((int) (voltage * 100 - (int) voltage * 100));
        if (((int) voltage) > 9) display.setCursor(20, 50);
        else display.setCursor(10, 50);
        //display.setCursor(30, 27);
        display.println(string);


        //display bike speed
        speedInteger = current;
        if (speedInteger >= 100) string = "99";
        else string = String((int) speedInteger);
        display.setTextSize(4);
        display.setCursor(62, 30);
        display.println(speedInteger);
        if (speedInteger >= 100) string = ".9";
        else string = "." + String((int) (speedFloat * 10 - (int) speedFloat * 10));
        display.setTextSize(2);
        if ((int) speedFloat > 9) display.setCursor(104, 45);
        else display.setCursor(84, 45);
        display.println(string);

        //draw lines
        display.drawLine(0, 17, 128, 17, WHITE);
        display.drawLine(56, 17, 56, 64, WHITE);
    }//display statistics
    else {
        display.clearDisplay();
        display.setTextSize(1);
        display.setCursor(0, 20);
        display.println("Max Speed: " + String((int) max_speed));

        display.setTextSize(1);
        display.setCursor(0, 30);
        display.println("Max Current: " + String((int) max_current));

        display.setTextSize(1);
        display.setCursor(0, 40);
        display.println("Min Voltage: " + String((int) min_voltage));
    }


    display.display();

    //delay(15); // waits 15ms for the servo to reach the position

    //if (shunt_read>0){
    Serial.println("shunt");
    Serial.println(shunt_read);
   

    /*
    if (current>0){
    Serial.println("current");
    Serial.print(current);   
    Serial.println(" A"); } 
     * */
    //Serial.print("thr ");
    //Serial.println(throttleOut);
    //Serial.println(" C"); 

    //Serial.print("speed ");
    //Serial.println(speedInteger);
}

