/* 
 * File:   definition.h
 * Author: justas
 *
 * Created on December 15, 2014, 7:12 PM
 */
#ifndef MAIN_H
#define MAIN_H

#include <Servo.h> 
#include <EEPROM.h>

//#define v1

#define BRAKEPIN (PINB & _BV(PB1))
#define BUTTONPIN (PINB & _BV(PB4))
#define RELAY_BUTTON (PIND & _BV(PD3))
#define RELAY_PIN (PIND & _BV(PD4))

#define RELAY_OFF (PORTD &= ~(1 << 4))
#define RELAY_ON (PORTD |= (1 << 4))

#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

#define debounce 10 // ms debounce period to prevent flickering when pressing or releasing the button
#define holdTime 1500 // ms hold period: how long to wait for press+hold event
#define circumference 56
#define vol_k  6611
#define NUM_SAMPLES 190   // number of analog samples to take per reading
#define UPDATE_FREQ 15


//PINS
#define brakePin 1 //PB1, not arduino pin D1
#define voltagePin A0
#define buttonPin  4
#ifdef v1
    #define escPin 13
#else
    #define escPin 10
#endif
//#define buttonPin1  9
#define shuntInputPin A3 // analog input 1 pin from current monitor (shunt)
//const int shuntInputPin2 = A2; // analog input 2 pin from current monitor (shunt)
#define potPin  A2    // select the input pin for the potentiometer
#define tempPin A1
//#define speedPin 9//pin connected to read switch
#define switchPin  2 //must be pin 2 or 3
#define switchPinInt  0 //for 328-based arduinos, 1 means digital I/O pin 2
#define current_addr 0x00 //eeprom adress for max current
#define temp_addr 0x10 //eeprom adress for max temp
#define exp_addr 0x20 //eeprom adress for thr exp
#define current_gain_addr 0x30 //eeprom adress for mode
#define phase_gain_addr 0x40 //eeprom adress for mode
#define phase_current_addr 0x50 //eeprom adress for max current

#define throttleZero  1000 // initialization/zero endpoint for controller
#define throttleMin  1000 // min setting for current or phase-current limited
#define throttleMax  2000 // max throttle output, microseconds

double currentSensor(int RawADC);
long readInternalVcc();


#endif	/* DEFINITION_H */