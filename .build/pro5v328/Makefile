























.build/pro5v328/Servo/Servo.o : /usr/share/arduino/libraries/Servo/Servo.cpp
	@echo Servo/Servo.cpp
	@mkdir -p .build/pro5v328/Servo
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/Servo/Servo.cpp
include .build/pro5v328/Servo/Servo.d



.build/pro5v328/Servo/libServo.a : .build/pro5v328/Servo/Servo.o
	@echo Linking libServo.a
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^












.build/pro5v328/EEPROM/EEPROM.o : /usr/share/arduino/libraries/EEPROM/EEPROM.cpp
	@echo EEPROM/EEPROM.cpp
	@mkdir -p .build/pro5v328/EEPROM
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/EEPROM/EEPROM.cpp
include .build/pro5v328/EEPROM/EEPROM.d



.build/pro5v328/EEPROM/libEEPROM.a : .build/pro5v328/EEPROM/EEPROM.o
	@echo Linking libEEPROM.a
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^







.build/pro5v328/Wire/utility/twi.o : /usr/share/arduino/libraries/Wire/utility/twi.c
	@echo Wire/utility/twi.c
	@mkdir -p .build/pro5v328/Wire/utility
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/libraries/Wire/utility/twi.c
include .build/pro5v328/Wire/utility/twi.d






.build/pro5v328/Wire/Wire.o : /usr/share/arduino/libraries/Wire/Wire.cpp
	@echo Wire/Wire.cpp
	@mkdir -p .build/pro5v328/Wire
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/Wire/Wire.cpp
include .build/pro5v328/Wire/Wire.d



.build/pro5v328/Wire/libWire.a : .build/pro5v328/Wire/utility/twi.o .build/pro5v328/Wire/Wire.o
	@echo Linking libWire.a
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^







.build/pro5v328/arduino/wiring.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring.c
	@echo arduino/wiring.c
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring.c
include .build/pro5v328/arduino/wiring.d

.build/pro5v328/arduino/WInterrupts.o : /usr/share/arduino/hardware/arduino/cores/arduino/WInterrupts.c
	@echo arduino/WInterrupts.c
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/WInterrupts.c
include .build/pro5v328/arduino/WInterrupts.d

.build/pro5v328/arduino/wiring_pulse.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_pulse.c
	@echo arduino/wiring_pulse.c
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_pulse.c
include .build/pro5v328/arduino/wiring_pulse.d

.build/pro5v328/arduino/wiring_shift.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_shift.c
	@echo arduino/wiring_shift.c
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_shift.c
include .build/pro5v328/arduino/wiring_shift.d

.build/pro5v328/arduino/avr-libc/malloc.o : /usr/share/arduino/hardware/arduino/cores/arduino/avr-libc/malloc.c
	@echo arduino/avr-libc/malloc.c
	@mkdir -p .build/pro5v328/arduino/avr-libc
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/avr-libc/malloc.c
include .build/pro5v328/arduino/avr-libc/malloc.d

.build/pro5v328/arduino/avr-libc/realloc.o : /usr/share/arduino/hardware/arduino/cores/arduino/avr-libc/realloc.c
	@echo arduino/avr-libc/realloc.c
	@mkdir -p .build/pro5v328/arduino/avr-libc
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/avr-libc/realloc.c
include .build/pro5v328/arduino/avr-libc/realloc.d

.build/pro5v328/arduino/wiring_digital.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_digital.c
	@echo arduino/wiring_digital.c
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_digital.c
include .build/pro5v328/arduino/wiring_digital.d

.build/pro5v328/arduino/wiring_analog.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_analog.c
	@echo arduino/wiring_analog.c
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_analog.c
include .build/pro5v328/arduino/wiring_analog.d






.build/pro5v328/arduino/WString.o : /usr/share/arduino/hardware/arduino/cores/arduino/WString.cpp
	@echo arduino/WString.cpp
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/WString.cpp
include .build/pro5v328/arduino/WString.d

.build/pro5v328/arduino/HID.o : /usr/share/arduino/hardware/arduino/cores/arduino/HID.cpp
	@echo arduino/HID.cpp
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/HID.cpp
include .build/pro5v328/arduino/HID.d

.build/pro5v328/arduino/main.o : /usr/share/arduino/hardware/arduino/cores/arduino/main.cpp
	@echo arduino/main.cpp
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/main.cpp
include .build/pro5v328/arduino/main.d

.build/pro5v328/arduino/CDC.o : /usr/share/arduino/hardware/arduino/cores/arduino/CDC.cpp
	@echo arduino/CDC.cpp
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/CDC.cpp
include .build/pro5v328/arduino/CDC.d

.build/pro5v328/arduino/Print.o : /usr/share/arduino/hardware/arduino/cores/arduino/Print.cpp
	@echo arduino/Print.cpp
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/Print.cpp
include .build/pro5v328/arduino/Print.d

.build/pro5v328/arduino/Stream.o : /usr/share/arduino/hardware/arduino/cores/arduino/Stream.cpp
	@echo arduino/Stream.cpp
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/Stream.cpp
include .build/pro5v328/arduino/Stream.d

.build/pro5v328/arduino/WMath.o : /usr/share/arduino/hardware/arduino/cores/arduino/WMath.cpp
	@echo arduino/WMath.cpp
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/WMath.cpp
include .build/pro5v328/arduino/WMath.d

.build/pro5v328/arduino/HardwareSerial.o : /usr/share/arduino/hardware/arduino/cores/arduino/HardwareSerial.cpp
	@echo arduino/HardwareSerial.cpp
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/HardwareSerial.cpp
include .build/pro5v328/arduino/HardwareSerial.d

.build/pro5v328/arduino/Tone.o : /usr/share/arduino/hardware/arduino/cores/arduino/Tone.cpp
	@echo arduino/Tone.cpp
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/Tone.cpp
include .build/pro5v328/arduino/Tone.d

.build/pro5v328/arduino/IPAddress.o : /usr/share/arduino/hardware/arduino/cores/arduino/IPAddress.cpp
	@echo arduino/IPAddress.cpp
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/IPAddress.cpp
include .build/pro5v328/arduino/IPAddress.d

.build/pro5v328/arduino/USBCore.o : /usr/share/arduino/hardware/arduino/cores/arduino/USBCore.cpp
	@echo arduino/USBCore.cpp
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/USBCore.cpp
include .build/pro5v328/arduino/USBCore.d

.build/pro5v328/arduino/new.o : /usr/share/arduino/hardware/arduino/cores/arduino/new.cpp
	@echo arduino/new.cpp
	@mkdir -p .build/pro5v328/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/new.cpp
include .build/pro5v328/arduino/new.d



.build/pro5v328/arduino/libarduino.a : .build/pro5v328/arduino/wiring.o .build/pro5v328/arduino/WInterrupts.o .build/pro5v328/arduino/wiring_pulse.o .build/pro5v328/arduino/wiring_shift.o .build/pro5v328/arduino/avr-libc/malloc.o .build/pro5v328/arduino/avr-libc/realloc.o .build/pro5v328/arduino/wiring_digital.o .build/pro5v328/arduino/wiring_analog.o .build/pro5v328/arduino/WString.o .build/pro5v328/arduino/HID.o .build/pro5v328/arduino/main.o .build/pro5v328/arduino/CDC.o .build/pro5v328/arduino/Print.o .build/pro5v328/arduino/Stream.o .build/pro5v328/arduino/WMath.o .build/pro5v328/arduino/HardwareSerial.o .build/pro5v328/arduino/Tone.o .build/pro5v328/arduino/IPAddress.o .build/pro5v328/arduino/USBCore.o .build/pro5v328/arduino/new.o
	@echo Linking libarduino.a
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^







.build/pro5v328/src/glcdfont.o : src/glcdfont.c
	@echo src/glcdfont.c
	@mkdir -p .build/pro5v328/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c src/glcdfont.c
include .build/pro5v328/src/glcdfont.d









.build/pro5v328/src/Adafruit_GFX.o : src/Adafruit_GFX.cpp
	@echo src/Adafruit_GFX.cpp
	@mkdir -p .build/pro5v328/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c src/Adafruit_GFX.cpp
include .build/pro5v328/src/Adafruit_GFX.d

.build/pro5v328/src/FilterOnePole.o : src/FilterOnePole.cpp
	@echo src/FilterOnePole.cpp
	@mkdir -p .build/pro5v328/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c src/FilterOnePole.cpp
include .build/pro5v328/src/FilterOnePole.d

.build/pro5v328/src/Adafruit_SSD1306.o : src/Adafruit_SSD1306.cpp
	@echo src/Adafruit_SSD1306.cpp
	@mkdir -p .build/pro5v328/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c src/Adafruit_SSD1306.cpp
include .build/pro5v328/src/Adafruit_SSD1306.d

.build/pro5v328/src/main.o : src/main.cpp
	@echo src/main.cpp
	@mkdir -p .build/pro5v328/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c src/main.cpp
include .build/pro5v328/src/main.d

.build/pro5v328/src/functions.o : src/functions.cpp
	@echo src/functions.cpp
	@mkdir -p .build/pro5v328/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c src/functions.cpp
include .build/pro5v328/src/functions.d

.build/pro5v328/src/RunningStatistics.o : src/RunningStatistics.cpp
	@echo src/RunningStatistics.cpp
	@mkdir -p .build/pro5v328/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c src/RunningStatistics.cpp
include .build/pro5v328/src/RunningStatistics.d

.build/pro5v328/src/FilterDerivative.o : src/FilterDerivative.cpp
	@echo src/FilterDerivative.cpp
	@mkdir -p .build/pro5v328/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c src/FilterDerivative.cpp
include .build/pro5v328/src/FilterDerivative.d

.build/pro5v328/src/FilterTwoPole.o : src/FilterTwoPole.cpp
	@echo src/FilterTwoPole.cpp
	@mkdir -p .build/pro5v328/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=106 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c src/FilterTwoPole.cpp
include .build/pro5v328/src/FilterTwoPole.d







.build/pro5v328/firmware.elf : .build/pro5v328/src/glcdfont.o .build/pro5v328/src/Adafruit_GFX.o .build/pro5v328/src/FilterOnePole.o .build/pro5v328/src/Adafruit_SSD1306.o .build/pro5v328/src/main.o .build/pro5v328/src/functions.o .build/pro5v328/src/RunningStatistics.o .build/pro5v328/src/FilterDerivative.o .build/pro5v328/src/FilterTwoPole.o .build/pro5v328/Servo/libServo.a .build/pro5v328/EEPROM/libEEPROM.a .build/pro5v328/Wire/libWire.a .build/pro5v328/arduino/libarduino.a
	@echo Linking firmware.elf
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -Wl,-Os -Wl,--gc-sections -o $@ $^ -lm


.build/pro5v328/firmware.hex : .build/pro5v328/firmware.elf
	@echo Converting to firmware.hex
	@/usr/share/arduino/hardware/tools/avr/bin/avr-objcopy -O ihex -R .eeprom $^ $@

include .build/pro5v328/src/dependencies.d .build/pro5v328/arduino/dependencies.d .build/pro5v328/Servo/dependencies.d .build/pro5v328/EEPROM/dependencies.d .build/pro5v328/Wire/dependencies.d

all : .build/pro5v328/firmware.hex
	@true

