#include "functions.h"
#include "main.h"
#include <avr/wdt.h>
#include "Filters.h"

FilterOnePole lowpassFilter_temp(LOWPASS, 4.0);

//This function will write a 2 byte integer to the eeprom at the specified address and address + 1
void EEPROMWriteInt(int p_address, int p_value) {
    byte lowByte = ((p_value >> 0) & 0xFF);
    byte highByte = ((p_value >> 8) & 0xFF);

    EEPROM.write(p_address, lowByte);
    EEPROM.write(p_address + 1, highByte);
}


//This function will read a 2 byte integer from the eeprom at the specified address and address + 1
unsigned int EEPROMReadInt(int p_address) {
    byte lowByte = EEPROM.read(p_address);
    byte highByte = EEPROM.read(p_address + 1);

    return ((lowByte << 0) & 0xFF) + ((highByte << 8) & 0xFF00);
}


//read temp from thermistor

double temp() {
    // Inputs ADC Value from Thermistor and outputs Temperature in Celsius
    lowpassFilter_temp.input(analogRead(tempPin));
    int RawADC = lowpassFilter_temp.output();
    long Resistance;
    double Temp;
    if (RawADC == 0) return 500; //thermistor dissconected
    else {
        // Assuming a 10k Thermistor.  Calculation is actually: Resistance = (1024/ADC)
        Resistance = ((10240000 / RawADC) - 10000);

        /******************************************************************/
        /* Utilizes the Steinhart-Hart Thermistor Equation:				*/
        /*    Temperature in Kelvin = 1 / {A + B[ln(R)] + C[ln(R)]^3}		*/
        /*    where A = 0.001129148, B = 0.000234125 and C = 8.76741E-08	*/
        /******************************************************************/

        Temp = log(Resistance);
        Temp = 10 / (0.001129148 + (0.000234125 * Temp) + (0.0000000876741 * Temp * Temp * Temp));
        Temp = Temp - 2731.5; // Convert Kelvin to Celsius
        return Temp; // Return the Temperature
    }
}

double currentSensor(int RawADC, long InternalVcc) {

    int Sensitivity = 10; // mV/A
    double ZeroCurrentVcc = InternalVcc / 2;
    double SensedVoltage = (RawADC * InternalVcc) / 1024;
    double Difference = SensedVoltage - ZeroCurrentVcc;
    double SensedCurrent = Difference / Sensitivity;
    return SensedCurrent; // Return the Current
}

long readInternalVcc() {

    long result;
    ADMUX = _BV(REFS0) | _BV(MUX3) | _BV(MUX2) | _BV(MUX1);
    _delay_ms(1); // Wait for Vref to settle
    ADCSRA |= _BV(ADSC); // Convert
    while (bit_is_set(ADCSRA, ADSC));
    result = ADCL;
    result |= ADCH << 8;
    //result = 1126400L / result; // Back-calculate AVcc in mV
    result = 1094983L / result;
    return result;

}

void set_current(Adafruit_SSD1306 display, int* current, int* phase_c, int* temp, int* threxp, int* current_gain, int* phase_gain) {

    bool oled_update = true;
    display.clearDisplay();
    display.setTextSize(3);
    display.setCursor(20, 20);
    display.println(F("Setup"));
    display.display();
    _delay_ms(200);
    while (!BRAKEPIN) wdt_reset();

//    while (BUTTONPIN) {
//        wdt_reset();
//        //display throttle
//        if (oled_update) {
//            display.clearDisplay();
//            display.setTextSize(2);
//            display.setCursor(3, 0);
//            display.println(F("Set max I:"));
//            display.setTextSize(3);
//            display.setCursor(25, 30);
//            display.print(*current / 10);
//            display.println(" A");
//            display.display();
//            oled_update = false;
//        }
//        if (!BRAKEPIN) {
//            *current += 10;
//            _delay_ms(30);
//            oled_update = true;
//        }// increase current if button 0 pressed
//        if (*current > 800) *current = 0;
//        if (*current < 0) *current = 800;
//    }
//
//    EEPROMWriteInt(current_addr, *current); // save new current value to eeprom
//    oled_update = true;
//    _delay_ms(300);


//    while (BUTTONPIN) {
//        wdt_reset();
//        //display throttle
//        if (oled_update) {
//            display.clearDisplay();
//            display.setTextSize(2);
//            display.setCursor(3, 0);
//            display.println(F("Max ph I:"));
//            display.setTextSize(3);
//            display.setCursor(25, 30);
//            display.print(*phase_c / 10);
//            display.println(" A");
//            display.display();
//            oled_update = false;
//        }
//        if (!BRAKEPIN) {
//            *phase_c += 10;
//            _delay_ms(30);
//            oled_update = true;
//        }// increase current if button 0 pressed
//        if (*phase_c > 1300) *phase_c = 0;
//        if (*phase_c < 0) *phase_c = 1300;
//    }
//    EEPROMWriteInt(phase_current_addr, *phase_c); // save new current value to eeprom
//    oled_update = true;
//    _delay_ms(300);


    while (BUTTONPIN) {
        wdt_reset();
        if (oled_update) {
            display.clearDisplay();
            display.setTextSize(2);
            display.setCursor(3, 0);
            display.println(F("Set max T:"));
            display.setTextSize(3);
            display.setCursor(25, 30);
            display.print(*temp / 10);
            display.println(F(" C"));
            display.display();
            oled_update = false;
        }
        if (!BRAKEPIN) {
            *temp += 10;
            _delay_ms(30);
            oled_update = true;
        }
        if (*temp > 1000) *temp = 0;
    }

    EEPROMWriteInt(temp_addr, *temp);
    oled_update = true;
    _delay_ms(300);

    while (BUTTONPIN) {
        wdt_reset();
        if (oled_update) {
            display.clearDisplay();
            display.setTextSize(2);
            display.setCursor(5, 0);
            display.println(F("Set expo:"));
            display.setTextSize(3);
            display.setCursor(50, 30);
            display.print(*threxp);
            display.display();
            oled_update = false;
        }
        if (!BRAKEPIN) {
            *threxp += 1;
            _delay_ms(30);
            oled_update = true;
        }
        if (*threxp > 5) *threxp = 0;
    }
    EEPROMWriteInt(exp_addr, *threxp); // save new current value to eeprom
    oled_update = true;
    _delay_ms(300);



    while (BUTTONPIN) {
        wdt_reset();
        if (oled_update) {
            display.clearDisplay();
            display.setTextSize(2);
            display.setCursor(5, 0);
            display.println(F("Set Gain:"));
            display.setTextSize(3);
            display.setCursor(40, 30);
            display.print(*current_gain);
            display.display();
            oled_update = false;
        }
        if (!BRAKEPIN) {
            *current_gain += 1;
            _delay_ms(30);
            oled_update = true;
        }
        if (*current_gain > 50) *current_gain = 10;
    }
    EEPROMWriteInt(current_gain_addr, *current_gain); // save new current value to eeprom
    oled_update = true;
    _delay_ms(300);


    while (BUTTONPIN) {
        wdt_reset();
        if (oled_update) {
            display.clearDisplay();
            display.setTextSize(2);
            display.setCursor(5, 0);
            display.println(F("Ph Gain:"));
            display.setTextSize(3);
            display.setCursor(40, 30);
            display.print(*phase_gain);
            display.display();
            oled_update = false;
        }
        if (!BRAKEPIN) {
            *phase_gain += 1;
            _delay_ms(30);
            oled_update = true;
        }
        if (*phase_gain > 35) *phase_gain = 1;
    }
    EEPROMWriteInt(phase_gain_addr, *phase_gain); // save new current value to eeprom
    _delay_ms(300);
    display.clearDisplay();

}



