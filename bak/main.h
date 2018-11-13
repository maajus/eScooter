/* 
 * File:   definition.h
 * Author: justas
 *
 * Created on December 15, 2014, 7:12 PM
 */
#include <Arduino.h>
#include <Servo.h> 
#include <Wire.h>
#include <EEPROM.h>

#ifndef DEFINITION_H
#define	DEFINITION_H


#define debounce 10 // ms debounce period to prevent flickering when pressing or releasing the button
#define holdTime 1500 // ms hold period: how long to wait for press+hold event

//PINS
#define brakePin 9
#define voltagePin A0
#define buttonPin  12
//#define buttonPin1  9
#define shuntInputPin A3 // analog input 1 pin from current monitor (shunt)
//const int shuntInputPin2 = A2; // analog input 2 pin from current monitor (shunt)
#define potPin  A2    // select the input pin for the potentiometer
#define ledPin  4
#define ledPin1  8
#define melodyPin 10
#define tempPin 1
//#define speedPin 9//pin connected to read switch
#define switchPin  2 //must be pin 2 or 3
#define switchPinInt  0 //for 328-based arduinos, 1 means digital I/O pin 3
#define addr 100 //eeprom adress

#define throttleZero  1000 // initialization/zero endpoint for controller
#define throttleMin  1000 // min setting for current or phase-current limited
#define throttleMax  1950 // max throttle output, microseconds

#define currentGain  35 // proportional gain setting for current limiting
#define phaseMax  700 // maximum phase current *10 (set to 900 for 90 amps)
#define phaseGain  16 // proportional gain for phase current limiting

//speed variables 
/*
int reedVal;
long timer;// time between one full rotation (in ms)
float kmh=0;
float circumference = 2135;
int maxReedCounter = 100;//min time (in ms) of one rotation (for debouncing)
int reedCounter = 300; */

///////Reed Switch//////////////
/*
int circleNum = 0;
float odometer = 0;
float miles = 0;
float kilometers = 0;
float speedometer = 0;
float MPH = 0;
float KPH = 0;
int reedTime = 0;
int reedTimeDelta = 0;
boolean reedOn = false;
float wheelC = 212.5;
*/

#endif	/* DEFINITION_H */