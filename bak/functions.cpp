#include "functions.h"
#include "main.h"

// Button variables
int button1_state = HIGH; // value read from button
int button1_last = HIGH; // buffered value of the button's previous state
long btnDnTime; // time the button was pressed down
long btnUpTime; // time the button was released
boolean ignoreUp = false; // whether to ignore the button release because the click+hold was triggered
boolean hold = false;
//int ledState = LOW;             // ledState used to set the LED
long previousMillis = 0;        // will store last time LED was updated
long interval = 20;           // interval at which to blink (milliseconds)
// Median filter
int _median;
int _v[3];


//This function will write a 2 byte integer to the eeprom at the specified address and address + 1
void EEPROMWriteInt(int p_address, int p_value)
      {
      byte lowByte = ((p_value >> 0) & 0xFF);
      byte highByte = ((p_value >> 8) & 0xFF);

      EEPROM.write(p_address, lowByte);
      EEPROM.write(p_address + 1, highByte);
      }

//This function will read a 2 byte integer from the eeprom at the specified address and address + 1
unsigned int EEPROMReadInt(int p_address)
      {
      byte lowByte = EEPROM.read(p_address);
      byte highByte = EEPROM.read(p_address + 1);

      return ((lowByte << 0) & 0xFF) + ((highByte << 8) & 0xFF00);
      }

//blink status led (BLUE)
/*
void blinkled(unsigned int time){
  unsigned long currentMillis = millis();
 
  if(currentMillis - previousMillis > time) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;   

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }

 
}*/

void buzz(long frequency, long length) {

  long delayValue = 1000000/frequency/2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length/ 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to 
  //// get the total number of cycles to produce
  for (long i=0; i < numCycles; i++){ // for the calculated length of time...
    digitalWrite(melodyPin,HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(melodyPin,LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  };

}

//blink green LED
void blinkled_times(int times){
  for (int i=0; i<times; i++){
    digitalWrite(ledPin1,HIGH);
    delay(50);
    buzz(33,40);
    digitalWrite(ledPin1,LOW);
    delay(400);
  }
}

//read temp from thermistor
double temp() {
  // Inputs ADC Value from Thermistor and outputs Temperature in Celsius
  int RawADC = analogRead(tempPin);
  long Resistance;
  double Temp;
  if (RawADC == 0) return 500; //thermistor dissconected
  else {
  // Assuming a 10k Thermistor.  Calculation is actually: Resistance = (1024/ADC)
  Resistance=((10240000/RawADC) - 10000);

  /******************************************************************/
  /* Utilizes the Steinhart-Hart Thermistor Equation:				*/
  /*    Temperature in Kelvin = 1 / {A + B[ln(R)] + C[ln(R)]^3}		*/
  /*    where A = 0.001129148, B = 0.000234125 and C = 8.76741E-08	*/
  /******************************************************************/
  
  Temp = log(Resistance);
  Temp = 1 / (0.001129148 + (0.000234125 * Temp) + (0.0000000876741 * Temp * Temp * Temp));
  Temp = Temp - 273.15;  // Convert Kelvin to Celsius
  return Temp;  // Return the Temperature
  }
}



int set_current(int currentMax) {
  
  
      delay(1000);
      blinkled_times(currentMax/100); //show amp setting on LED
      
      while (hold == false){ //change current setting while buttons not pressed again
        //blinkled(300); // show what we are in seting mode on status LED
        if (digitalRead(buttonPin) == LOW) {currentMax+=100; blinkled_times(1);} // increase current if button 0 pressed

        button1_state = digitalRead(buttonPin1);             // read button 2 state
        if (button1_state == LOW && button1_last == HIGH && (millis() - btnUpTime) > long(debounce)){
            btnDnTime = millis();  //save pressing time
          }

        if (button1_state == HIGH && button1_last == LOW && (millis() - btnDnTime) > long(debounce)){  // Test for button release and store the up time
            if (ignoreUp == false) {currentMax-=100; blinkled_times(1);}
            else ignoreUp = false;
            btnUpTime = millis();
          }

        // Test for button held down for longer than the hold time
        if (button1_state == LOW && (millis() - btnDnTime) > long(holdTime)){
          hold=true; // exit setting mode
          ignoreUp = true;
          btnDnTime = millis();
        }
        button1_last = button1_state; // save button state
      }
      hold = false;
      if (currentMax < 100) currentMax=100; //not allow currents smaller than 10 and bigger than 80 amps
      if (currentMax > 800) currentMax=800;
      blinkled_times(currentMax/100); // show the new current value
      EEPROMWriteInt(addr, currentMax); // save new current value to eeprom
      delay(500);
      return currentMax;
  
}


/*

  String doubleToString(double input,int decimalPlaces){
    if(decimalPlaces!=0){
      String string = String((int)(input*pow(10,decimalPlaces)));
      if(abs(input)<1){
        if(input>0)
          string = "0"+string;
        else if(input<0)
      string = string.substring(0,1)+"0"+string.substring(1);
      }
  return string.substring(0,string.length()-decimalPlaces)+"."+string.substring(string.length()-decimalPlaces);
  }
  else {
    return String((int)input);
  }
}
*/
char * floatToString(char * outstr, double val, byte precision, byte widthp){
  char temp[16]; //increase this if you need more digits than 15
  byte i;

  temp[0]='\0';
  outstr[0]='\0';

  if(val < 0.0){
    strcpy(outstr,"-\0");  //print "-" sign
    val *= -1;
  }

  if( precision == 0) {
    strcat(outstr, ltoa(round(val),temp,10));  //prints the int part
  }
  else {
    unsigned long frac, mult = 1;
    byte padding = precision-1;
    
    while (precision--)
      mult *= 10;

    val += 0.5/(float)mult;      // compute rounding factor
    
    strcat(outstr, ltoa(floor(val),temp,10));  //prints the integer part without rounding
    strcat(outstr, ".\0"); // print the decimal point

    frac = (val - floor(val)) * mult;

    unsigned long frac1 = frac;

    while(frac1 /= 10) 
      padding--;

    while(padding--) 
      strcat(outstr,"0\0");    // print padding zeros

    strcat(outstr,ltoa(frac,temp,10));  // print fraction part
  }

  // generate width space padding 
  if ((widthp != 0)&&(widthp >= strlen(outstr))){
    byte J=0;
    J = widthp - strlen(outstr);

    for (i=0; i< J; i++) {
      temp[i] = ' ';
    }

    temp[i++] = '\0';
    strcat(temp,outstr);
    strcpy(outstr,temp);
  }

  return outstr;
}

int runMedian(int data)             //Median filter (78 bytes, 12 microseconds)
{
    
  // Note:
  //  quick & dirty dumb implementation that only keeps 3 samples: probably better to do insertion sort when more samples are needed in the calculation
  //   or Partial sort: http://en.cppreference.com/w/cpp/algorithm/nth_element
  // On better inspection of this code... performance seem quite good
  // TODO: compare with: http://embeddedgurus.com/stack-overflow/tag/median-filter/
  _v[0] = _v[1];
  _v[1] = _v[2];
  _v[2]= data;

  // printSamples();

  if (_v[2] < _v[1]) {
    if (_v[2] < _v[0]) {
      if (_v[1] < _v[0]) {
        _median = _v[1];
      }
      else {
        _median = _v[0];
      }
    }
    else {
      _median = _v[2];
    }
  }
  else {
    if (_v[2] < _v[0]) {
      _median = _v[2];
    }
    else {
      if (_v[1] < _v[0]) {
        _median = _v[0];
      }
      else {
        _median = _v[1];
      }
    }
  }
  return (_median);
}