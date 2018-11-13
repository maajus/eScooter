//ebike by J.Mazeika 2014

#include "main.h"
#include "functions.h"
#include "Filters.h"
#include <avr/wdt.h>

volatile unsigned long hitTime;

void recordTime() { //interrupt routine called when reed switch is on
    cli();
    hitTime = micros(); //reads a clock in microseconds

}

int main() {

    //add display
    Adafruit_SSD1306 display(0);

    // create a one pole (RC) lowpass filter
    //FilterOnePole lowpassFilter_current(LOWPASS, 2);
    //FilterOnePole lowpassFilter_pot(LOWPASS, 1.5);

    //voltage read variables
    long sum_v = 0; // sum of voltage samples taken
    unsigned char sample_count = 0; // current sample number
    unsigned char oled_count = 0;
    unsigned int voltage = 0; // calculated voltage
    unsigned int old_voltage = 0;
    unsigned int cur_voltage = 0;
    unsigned int internal_voltage;

    // throttle variables
    int throttleOut = 1000; // variable to store the servo position 
    int throttleReq = 1050; // the throttle setting requested by user via pedal
    int throttleCurrent = 0; // throttle setting to achieve current limit
    int throttlePhase = 0; // throttle setting to achieve phase current limit

    //current variables
    int phaseCurrent = 0; // phase current variable; 10X actual
    double current = 0; // variable for current from shuntInputPin
    int currentMax = 100; // maximum current *10 (set to 400 for 40 amps)
    int phaseCurrentMax = 100;
    int currentGain = 0;
    int phaseGain = 0;

    //temp variables
    double temp_sum = 0;
    double old_temp = 0;
    double cur_temp = 0;
    unsigned int temp_samples = 0;
    double Temp = 0;
    int tempMax = 600;
    int threxpo = 3;

    //Speedometer
    //CONDITIONAL, CONSTANT PARAMETERS:
    const unsigned int debounceSwitchms = 20; //Our routine will ignore signals that come closer together than this amount of ms
    const unsigned long maxTime = 3000000; //The amount of microseconds before going into waiting mode.
    const unsigned int debounce_delay = 80; //how many loops before 

    unsigned long lastTime; //Track the time of the previous signal so we can calculate time elapsed since.
    unsigned long microsSince; //for determining idleness. 0 <= ul <= 4,294,967,295
    unsigned long periodMicroSeconds;
    float speedFloat; //we use floating point math for maximum precision.
    byte precision; //to keep track of roughly how precise the frequency will be.
    word delayCounter = 0; //can count 0 to 65535

    boolean armed = false;
    boolean delta = false;
    byte preload = 0; //check if mosfets fully on
    byte display_type = 1;
    boolean display_update;
    byte but_timer = 0;

    //statistics variables
    unsigned int max_speed = 0;
    unsigned int max_current = 0;
    unsigned int max_temp = 0;
    unsigned int min_voltage = 999;

    Servo myservo; // create servo object to control a servo 
    unsigned int PotValue = 0; // variable to store the value coming from the pot

    //long time1, time2;


    //---------------start init---------------//
    init();
    Serial.begin(115200);
    Serial.print("WELCOME TO JM SCOOTER");
    //init display
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // initialize with the I2C addr 0x3D (for the 128x64)
    display.clearDisplay();
    display.setTextSize(2);
    display.setTextColor(WHITE);
    display.setCursor(0, 0);
    display.println(F("WELCOME TO"));
    display.setTextSize(4);
    display.setCursor(39, 18);
    display.println(F("JM"));
    display.setTextSize(2);
    display.setCursor(23, 50);
    display.println(F("scooter"));
    display.display();

    // initialize the pins:
    DDRB &= ~(1 << buttonPin); //input - menu button
    PORTB |= (1 << buttonPin); //pull up button pin

    DDRD &= ~(1 << switchPin); //input - reed switch for speed
    PORTD |= (1 << switchPin); //pullup for hall

    DDRB &= ~(1 << brakePin); //input pin for brake switches
    PORTB |= (1 << brakePin); //pull up brake switches
 
    DDRD &= ~(1 << 3); //input - relay button
    //PORTD &= ~(1 << 3); //pull down for button
    PORTD &= ~(1<<3);
    
    DDRD |= (1 << 4); //output - relay switch mosfet
    PORTD &= ~(1 << 4); //pulldown for mosfet gate
    

    //read config from eeprom
    currentMax = min(EEPROMReadInt(current_addr), 1000); //read max current setting from EEPROM
    currentMax = max(currentMax, 10);

    phaseCurrentMax = min(EEPROMReadInt(phase_current_addr), 1300); //read max phase current setting from EEPROM
    phaseCurrentMax = max(phaseCurrentMax, 10);

    tempMax = EEPROMReadInt(temp_addr);

    threxpo = min(EEPROMReadInt(exp_addr), 10);
    threxpo = max(threxpo, 0);

    currentGain = min(EEPROMReadInt(current_gain_addr), 50);
    currentGain = max(currentGain, 0);

    phaseGain = min(EEPROMReadInt(phase_gain_addr), 50);
    phaseGain = max(phaseGain, 0);


    //init hall sensor
    attachInterrupt(switchPinInt, recordTime, FALLING); //Go to recordTime whenever interrupt switchPinInt goes from high to low
    precision = 0; //set as first time switch
    //init servo control
    myservo.attach(escPin); // attaches the servo on pin 13 to the servo object
    //wdt_enable(WDTO_2S); //enable watchdog
    _delay_ms(500);

    //---------------start main loop---------------//

    while (1) {

        wdt_reset(); //reset watchdog timer;
        //read motor temp
        
        if (Temp < tempMax) { //let arm motor if temp if below maxtemp
            //if overheat, give time to cool down
            if(!armed){
                if (Temp+10 < tempMax)
                    armed = true;
            }

        } else {
            armed = false; //stop motor if temp reaches tempmax
        }
        
        // enter config menu if brake&button pressed
        if ((!BRAKEPIN)&&(!BUTTONPIN) && (throttleReq < 5200)) {
            Serial.print("SETUP");
            set_current(display, &currentMax, &phaseCurrentMax, &tempMax, &threxpo, &currentGain, &phaseGain); //enter to set mode when brake and button pressed
            display_type = 1;
            _delay_ms(300);
        }



        //calculate speed
//        if (hitTime > 0) {//There's a 1 in 4 billion chance hitTime is zero but represents an actual reading.
//            if (precision == 0) {//this is first time switch, so no reference, so only set precision flag and record time.
//                precision = 1; //so we don't end up here next time
//                lastTime = hitTime; //record now for reference next time.
//            } else {
//                //periodMicroSeconds = hitTime - lastTime; //if timer has overflowed once since last time, ok since this subtraction will overflow back.
//                if ((hitTime - lastTime) > debounceSwitchms * 1000) {//debounce by rejecting too-fast times
//                    periodMicroSeconds = hitTime - lastTime;
//                    precision = 1; //Set our flag so we know we have a valid period
//                    lastTime = hitTime; //record now for reference next time.
//                }
//            }
//            hitTime = 0; //skip the above routine until another hit.
//
//        }
//        wdt_reset(); //reset watchdog timer;
//        //We don't want to read micros every trip through this loop--Reading micros causes interrupt issues.
//        // So, if we increase a 16-bit (word) variable by one every trip, it will only overflow back to zero once every 65536 (2^16) trips.
//        delayCounter++;
//        if (delayCounter > debounce_delay) {
//            delayCounter = 0;
//            microsSince = micros() - lastTime; //Keep track of idleness
//        }
//        if (precision > 0 && microsSince > maxTime) {//It's been more than maxTime since the last hit, so go back into waiting mode
//            precision = 0; //set as first time switch
//            periodMicroSeconds = 0;
//        }
//
//        // cm/(100*1000)       us/(1000*1000*60*60)
//        speedFloat = (float) (circumference * 36000) / (float) periodMicroSeconds; //now it is speed in km/s
//        sei();

        //voltage read
        cur_voltage = analogRead(voltagePin); // take a number of analog samples and add them up
        if(abs(cur_voltage-old_voltage<3)){
            sum_v += cur_voltage;
            sample_count++;
        }
        
        old_voltage =  cur_voltage;    
        if (sample_count > NUM_SAMPLES) {
            
            Temp = temp(); //read temp
            //read internal vcc
            internal_voltage = readInternalVcc();
            voltage = (sum_v / sample_count * internal_voltage) / vol_k; //0.0136921217
            sample_count = 0;
            
            sum_v = 0;
            preload++;

        }
        cur_temp = temp();
        if(abs(cur_temp - old_temp) < 10){
            temp_sum += cur_temp;
            temp_samples++;
        }
        old_temp = cur_temp;
        
        if(temp_samples > NUM_SAMPLES*2){
            Temp = temp_sum/temp_samples;
            temp_sum = 0;
            temp_samples = 0;
        }

        //lowpassFilter_current.input(currentSensor(analogRead(shuntInputPin), internal_voltage));
        //current = lowpassFilter_current.output();
        //current = max(0, current); // do not allow negative currents
        //current = current * 10;
        current = 0;
        //lowpassFilter_pot.input(analogRead(potPin)); // read the value from the pot
        //PotValue = lowpassFilter_pot.output();
        PotValue = analogRead(potPin);
        throttleReq = map(PotValue, 195, 855, 1150, throttleMax); //change range 200-800 to 1000-2000

        if (PotValue > 205) { // send 1000 if no throttle is applied, else start from 1100. For ESC range.
            throttleReq = 1100 + pow((throttleReq - 1100), threxpo) / (pow((2000 - 1100), (threxpo - 1)));
        } else throttleReq = throttleMin;
        throttleReq = min(throttleReq, throttleMax); // limit max throttle
        throttleReq = max(throttleReq, throttleZero); //limit min throttle

        // this routine computes the throttle output required for current control
        throttleCurrent = throttleOut - currentGain * (current - currentMax) / 100;
        throttleCurrent = max(throttleCurrent, throttleMin);

        // compute the phase current phase current = shunt current/throttle
        phaseCurrent = current * (throttleMax - throttleMin) / max((throttleOut - throttleMin), 23); //set last term to be appx 2.5% of throttle max - throttle min
        throttlePhase = throttleOut - phaseGain * (phaseCurrent - phaseCurrentMax) / 1000;
        throttlePhase = max(throttlePhase, throttleMin);
        throttleCurrent = min(throttleCurrent, throttlePhase); //choose lower of phase or current throttle


        throttleOut = min(throttleReq, throttleCurrent); // use the lower of current-limited or user requested throttle value
        if (!BRAKEPIN) throttleOut = throttleZero; //turn off motor when brakes are applied
        if(!armed) throttleOut = throttleZero;

        
        myservo.writeMicroseconds(throttleOut); // send throttle value to ESC
        

        //calculate statistics
        if (speedFloat > max_speed) max_speed = speedFloat;
        if (Temp > max_temp) max_temp = Temp;
        if (current > max_current) max_current = current;
        if ((voltage < min_voltage) && (preload > 5)) {
            min_voltage = voltage;
            preload = 20;
        }

        //select display screen
        but_timer++;
        if (!BUTTONPIN && (but_timer > 70)) {
            display_type++;
            but_timer = 0;
        }
        //display_update = true;
        oled_count++;
        if (oled_count > UPDATE_FREQ) {
            display_update = true;
            oled_count = 0;
        }
        if (display_update) {
            switch (display_type) {

                    //display main information on screen
                case 1:
                {
                    wdt_reset();
                    //display throttle
                    display.clearDisplay();
                    display.setTextSize(2);
                    display.setCursor(0, 0);
                    int throttleOut_p = map(throttleOut, throttleMin, throttleMax, 0, 100);
                    //int throttleReq_p = map(throttleReq, throttleMin, throttleMax, 0, 100);
                    //display.print(throttleReq_p);
                    //display.print(F("/"));
                    display.print(throttleOut_p);
                    display.print(F("%"));

                    //display arming
                    if (!BRAKEPIN) {
                        display.setCursor(65, 0);
                        display.println(F("BRAKE"));
                    } else {
                        display.setCursor(88, 0);
                        if (armed) {
                            display.print("OK");
                            //display.println(F("A"));
                       } else display.println(F("Temp"));
                    }

                    //display current
                    
                    display.setTextSize(1);
                    display.setCursor(9, 22);
                    display.print("Voltage     Temp");
                    //if(armed) display.print("OK");
                    //else display.print("Temp");
                    
                    
                    //display voltage
                    display.setTextSize(3);
                    display.setCursor(0, 35);
                    display.print(voltage / 10);
                    display.setTextSize(2);
                    display.print(F("."));
                    display.println(voltage % 10);

                    //display temp
                    display.setTextSize(3);
                    display.setCursor(68, 35);
                    display.print((int) Temp/10);
                    display.setTextSize(2);
                    display.print(F("."));
                    display.println((int)Temp % 10);


                    //draw lines
                    display.drawLine(0, 17, 128, 17, WHITE);
                    display.drawLine(64, 17, 64, 64, WHITE);
                    //display.drawLine(0, 42, 50, 42, WHITE);
                    break;
                }

//                case 2: //display current
//                {
//                    wdt_reset();
//                    display.clearDisplay();
//                    display.setTextSize(2);
//                    display.setCursor(25, 0);
//                    display.println(F("Current"));
//                    display.setTextSize(5);
//                    display.setCursor(0, 21);
//                    display.print(current / 10, 1);
//                    break;
//                }
                case 2: //display temp
                {
                    wdt_reset();
                    display.clearDisplay();
                    display.setTextSize(2);
                    display.setCursor(32, 0);
                    display.println(F("Temp"));
                    display.setTextSize(5);
                    display.setCursor(0, 21);
                    display.print(Temp / 10, 1);
                    break;
                }
                case 3: //display voltage
                {
                    wdt_reset();
                    display.clearDisplay();
                    display.setTextSize(2);
                    display.setCursor(25, 0);
                    display.println(F("Voltage"));
                    display.setTextSize(5);
                    display.setCursor(0, 21);
                    display.print((float) voltage / 10, 1);
                    break;
                }
                case 4: //display voltage
                {
                    wdt_reset();
                    display.clearDisplay();
                    display.setTextSize(2);
                    display.setCursor(35, 0);
                    display.println(F("VCC"));
                    display.setTextSize(5);
                    display.setCursor(0, 21);
                    display.print((float) internal_voltage / 1000, 2);
                    break;
                }
                case 5: //display statistics
                {
                    wdt_reset();
                    display.clearDisplay();
                    display.setTextSize(2);
                    display.setCursor(22, 0);
                    display.println(F("Status"));
                    display.setCursor(0, 17);
                    display.print(F("Max T: "));
                    display.print((int) max_temp);
                    display.setCursor(0, 33);
                    display.print(F("Max V: "));
                    display.print((int) max_speed);
                    display.setCursor(0, 49);
                    display.print(F("Min U: "));
                    display.print((int) min_voltage);
                    break;
                }
            }
            display.display();
            display_update = false;
        }

        if (display_type > 5) display_type = 1;



        // if (shunt_read>0){
        //Serial.println("shunt");
        //Serial.println(shunt_read);
        //Serial.print("brakes: ");
        //Serial.println(digitalRead(brakePin)); 

        //Serial.print("button: ");
        //Serial.println(digitalRead(buttonPin)); 
        //if (current>0){
        //Serial.print("current: ");
        //Serial.println(current);   
        //Serial.println(" A"); } 

        //Serial.print("voltage: ");
        //Serial.println(internal_voltage);
        //Serial.println(" C"); 

        Serial.print("pot ");
        Serial.println(PotValue);
        //Serial.print("thr ");
        //Serial.println(throttleOut);
        //Serial.println(throttleCurrent);
        //Serial.println(throttlePhase);

        //Serial.print("temp: ");
        //Serial.println(Temp);

        //time2 = time1;
        //time1 = millis();

        // Serial.print("time ");
        //Serial.println(time1-time2);
        
        //Serial.println(RELAY_BUTTON); 
        //Serial.println(delta); 
        //Serial.println(throttleOut);
        //if(!RELAY_BUTTON) RELAY_ON;
        //else RELAY_OFF;
        //_delay_ms(300);
    }
    return 0;
}
