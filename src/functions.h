/* 
 * File:   functions.h
 * Author: justas
 *
 * Created on December 15, 2014, 7:18 PM
 */
#include <Arduino.h>
#include <EEPROM.h>
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"


unsigned int EEPROMReadInt(int p_address);
void EEPROMWriteInt(int p_address, int p_value);
//void buzz(long frequency, long length);
//void blinkled(unsigned int time);
//void blinkled_times(int times);
double temp();
double currentSensor(int RawADC, long InternalVcc);
long readInternalVcc();
void set_current(Adafruit_SSD1306 display,int* current, int* phase_c, int* temp, int* threxp, int* current_gain, int* phase_gain);
