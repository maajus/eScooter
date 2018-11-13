/* 
 * File:   functions.h
 * Author: justas
 *
 * Created on December 15, 2014, 7:18 PM
 */
#include <Arduino.h>
#include <EEPROM.h>


unsigned int EEPROMReadInt(int p_address);
void EEPROMWriteInt(int p_address, int p_value);
void buzz(long frequency, long length);
void blinkled(unsigned int time);
void blinkled_times(int times);
double temp();
int set_current(int currentMax);
//char * floatToString(char * outstr, double val, byte precision, byte widthp);
//void recordTime();
char * floatToString(char * outstr, double val, byte precision, byte widthp);    
int runMedian(int data);