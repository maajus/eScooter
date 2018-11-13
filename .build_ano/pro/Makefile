























.build_ano/pro/Servo/src/sam/Servo.o : /usr/share/arduino/libraries/Servo/src/sam/Servo.cpp
	@echo Servo/src/sam/Servo.cpp
	@mkdir -p .build_ano/pro/Servo/src/sam
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/Servo/src/sam/Servo.cpp
include .build_ano/pro/Servo/src/sam/Servo.d

.build_ano/pro/Servo/src/avr/Servo.o : /usr/share/arduino/libraries/Servo/src/avr/Servo.cpp
	@echo Servo/src/avr/Servo.cpp
	@mkdir -p .build_ano/pro/Servo/src/avr
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/Servo/src/avr/Servo.cpp
include .build_ano/pro/Servo/src/avr/Servo.d



.build_ano/pro/Servo/libServo.a : .build_ano/pro/Servo/src/sam/Servo.o .build_ano/pro/Servo/src/avr/Servo.o
	@echo Linking libServo.a
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^














.build_ano/pro/EEPROM/libEEPROM.a : 
	@echo Linking libEEPROM.a
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^







.build_ano/pro/Wire/utility/twi.o : /usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility/twi.c
	@echo Wire/utility/twi.c
	@mkdir -p .build_ano/pro/Wire/utility
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility/twi.c
include .build_ano/pro/Wire/utility/twi.d






.build_ano/pro/Wire/Wire.o : /usr/share/arduino/hardware/arduino/avr/libraries/Wire/Wire.cpp
	@echo Wire/Wire.cpp
	@mkdir -p .build_ano/pro/Wire
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/libraries/Wire/Wire.cpp
include .build_ano/pro/Wire/Wire.d



.build_ano/pro/Wire/libWire.a : .build_ano/pro/Wire/utility/twi.o .build_ano/pro/Wire/Wire.o
	@echo Linking libWire.a
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^







.build_ano/pro/arduino/wiring.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/wiring.c
	@echo arduino/wiring.c
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/wiring.c
include .build_ano/pro/arduino/wiring.d

.build_ano/pro/arduino/WInterrupts.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/WInterrupts.c
	@echo arduino/WInterrupts.c
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/WInterrupts.c
include .build_ano/pro/arduino/WInterrupts.d

.build_ano/pro/arduino/wiring_pulse.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/wiring_pulse.c
	@echo arduino/wiring_pulse.c
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/wiring_pulse.c
include .build_ano/pro/arduino/wiring_pulse.d

.build_ano/pro/arduino/wiring_shift.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/wiring_shift.c
	@echo arduino/wiring_shift.c
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/wiring_shift.c
include .build_ano/pro/arduino/wiring_shift.d

.build_ano/pro/arduino/hooks.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/hooks.c
	@echo arduino/hooks.c
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/hooks.c
include .build_ano/pro/arduino/hooks.d

.build_ano/pro/arduino/wiring_digital.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/wiring_digital.c
	@echo arduino/wiring_digital.c
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/wiring_digital.c
include .build_ano/pro/arduino/wiring_digital.d

.build_ano/pro/arduino/wiring_analog.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/wiring_analog.c
	@echo arduino/wiring_analog.c
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/wiring_analog.c
include .build_ano/pro/arduino/wiring_analog.d






.build_ano/pro/arduino/HardwareSerial2.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial2.cpp
	@echo arduino/HardwareSerial2.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial2.cpp
include .build_ano/pro/arduino/HardwareSerial2.d

.build_ano/pro/arduino/HardwareSerial1.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial1.cpp
	@echo arduino/HardwareSerial1.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial1.cpp
include .build_ano/pro/arduino/HardwareSerial1.d

.build_ano/pro/arduino/WString.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/WString.cpp
	@echo arduino/WString.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/WString.cpp
include .build_ano/pro/arduino/WString.d

.build_ano/pro/arduino/HID.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/HID.cpp
	@echo arduino/HID.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/HID.cpp
include .build_ano/pro/arduino/HID.d

.build_ano/pro/arduino/HardwareSerial3.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial3.cpp
	@echo arduino/HardwareSerial3.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial3.cpp
include .build_ano/pro/arduino/HardwareSerial3.d

.build_ano/pro/arduino/main.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/main.cpp
	@echo arduino/main.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/main.cpp
include .build_ano/pro/arduino/main.d

.build_ano/pro/arduino/HardwareSerial0.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial0.cpp
	@echo arduino/HardwareSerial0.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial0.cpp
include .build_ano/pro/arduino/HardwareSerial0.d

.build_ano/pro/arduino/CDC.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/CDC.cpp
	@echo arduino/CDC.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/CDC.cpp
include .build_ano/pro/arduino/CDC.d

.build_ano/pro/arduino/Print.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/Print.cpp
	@echo arduino/Print.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/Print.cpp
include .build_ano/pro/arduino/Print.d

.build_ano/pro/arduino/Stream.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/Stream.cpp
	@echo arduino/Stream.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/Stream.cpp
include .build_ano/pro/arduino/Stream.d

.build_ano/pro/arduino/abi.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/abi.cpp
	@echo arduino/abi.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/abi.cpp
include .build_ano/pro/arduino/abi.d

.build_ano/pro/arduino/WMath.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/WMath.cpp
	@echo arduino/WMath.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/WMath.cpp
include .build_ano/pro/arduino/WMath.d

.build_ano/pro/arduino/HardwareSerial.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial.cpp
	@echo arduino/HardwareSerial.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial.cpp
include .build_ano/pro/arduino/HardwareSerial.d

.build_ano/pro/arduino/Tone.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/Tone.cpp
	@echo arduino/Tone.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/Tone.cpp
include .build_ano/pro/arduino/Tone.d

.build_ano/pro/arduino/IPAddress.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/IPAddress.cpp
	@echo arduino/IPAddress.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/IPAddress.cpp
include .build_ano/pro/arduino/IPAddress.d

.build_ano/pro/arduino/USBCore.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/USBCore.cpp
	@echo arduino/USBCore.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/USBCore.cpp
include .build_ano/pro/arduino/USBCore.d

.build_ano/pro/arduino/new.o : /usr/share/arduino/hardware/arduino/avr/cores/arduino/new.cpp
	@echo arduino/new.cpp
	@mkdir -p .build_ano/pro/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/avr/cores/arduino/new.cpp
include .build_ano/pro/arduino/new.d



.build_ano/pro/arduino/libarduino.a : .build_ano/pro/arduino/wiring.o .build_ano/pro/arduino/WInterrupts.o .build_ano/pro/arduino/wiring_pulse.o .build_ano/pro/arduino/wiring_shift.o .build_ano/pro/arduino/hooks.o .build_ano/pro/arduino/wiring_digital.o .build_ano/pro/arduino/wiring_analog.o .build_ano/pro/arduino/HardwareSerial2.o .build_ano/pro/arduino/HardwareSerial1.o .build_ano/pro/arduino/WString.o .build_ano/pro/arduino/HID.o .build_ano/pro/arduino/HardwareSerial3.o .build_ano/pro/arduino/main.o .build_ano/pro/arduino/HardwareSerial0.o .build_ano/pro/arduino/CDC.o .build_ano/pro/arduino/Print.o .build_ano/pro/arduino/Stream.o .build_ano/pro/arduino/abi.o .build_ano/pro/arduino/WMath.o .build_ano/pro/arduino/HardwareSerial.o .build_ano/pro/arduino/Tone.o .build_ano/pro/arduino/IPAddress.o .build_ano/pro/arduino/USBCore.o .build_ano/pro/arduino/new.o
	@echo Linking libarduino.a
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^







.build_ano/pro/src/glcdfont.o : src/glcdfont.c
	@echo src/glcdfont.c
	@mkdir -p .build_ano/pro/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c src/glcdfont.c
include .build_ano/pro/src/glcdfont.d









.build_ano/pro/src/Adafruit_GFX.o : src/Adafruit_GFX.cpp
	@echo src/Adafruit_GFX.cpp
	@mkdir -p .build_ano/pro/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c src/Adafruit_GFX.cpp
include .build_ano/pro/src/Adafruit_GFX.d

.build_ano/pro/src/FilterOnePole.o : src/FilterOnePole.cpp
	@echo src/FilterOnePole.cpp
	@mkdir -p .build_ano/pro/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c src/FilterOnePole.cpp
include .build_ano/pro/src/FilterOnePole.d

.build_ano/pro/src/Adafruit_SSD1306.o : src/Adafruit_SSD1306.cpp
	@echo src/Adafruit_SSD1306.cpp
	@mkdir -p .build_ano/pro/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c src/Adafruit_SSD1306.cpp
include .build_ano/pro/src/Adafruit_SSD1306.d

.build_ano/pro/src/main.o : src/main.cpp
	@echo src/main.cpp
	@mkdir -p .build_ano/pro/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c src/main.cpp
include .build_ano/pro/src/main.d

.build_ano/pro/src/functions.o : src/functions.cpp
	@echo src/functions.cpp
	@mkdir -p .build_ano/pro/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c src/functions.cpp
include .build_ano/pro/src/functions.d

.build_ano/pro/src/RunningStatistics.o : src/RunningStatistics.cpp
	@echo src/RunningStatistics.cpp
	@mkdir -p .build_ano/pro/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c src/RunningStatistics.cpp
include .build_ano/pro/src/RunningStatistics.d

.build_ano/pro/src/FilterDerivative.o : src/FilterDerivative.cpp
	@echo src/FilterDerivative.cpp
	@mkdir -p .build_ano/pro/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c src/FilterDerivative.cpp
include .build_ano/pro/src/FilterDerivative.d

.build_ano/pro/src/FilterTwoPole.o : src/FilterTwoPole.cpp
	@echo src/FilterTwoPole.cpp
	@mkdir -p .build_ano/pro/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=165 -DARDUINO_ARCH_AVR -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/avr/variants/eightanaloginputs -I/usr/share/arduino/libraries/Servo -I/usr/share/arduino/libraries/Servo/src -I/usr/share/arduino/libraries/Servo/src/sam -I/usr/share/arduino/libraries/Servo/src/avr -I/usr/share/arduino/hardware/arduino/avr/libraries/EEPROM -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire -I/usr/share/arduino/hardware/arduino/avr/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c src/FilterTwoPole.cpp
include .build_ano/pro/src/FilterTwoPole.d







.build_ano/pro/firmware.elf : .build_ano/pro/src/glcdfont.o .build_ano/pro/src/Adafruit_GFX.o .build_ano/pro/src/FilterOnePole.o .build_ano/pro/src/Adafruit_SSD1306.o .build_ano/pro/src/main.o .build_ano/pro/src/functions.o .build_ano/pro/src/RunningStatistics.o .build_ano/pro/src/FilterDerivative.o .build_ano/pro/src/FilterTwoPole.o .build_ano/pro/Servo/libServo.a .build_ano/pro/EEPROM/libEEPROM.a .build_ano/pro/Wire/libWire.a .build_ano/pro/arduino/libarduino.a
	@echo Linking firmware.elf
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -Wl,-Os -Wl,--gc-sections -o $@ $^ -lm


.build_ano/pro/firmware.hex : .build_ano/pro/firmware.elf
	@echo Converting to firmware.hex
	@/usr/share/arduino/hardware/tools/avr/bin/avr-objcopy -O ihex -R .eeprom $^ $@

include .build_ano/pro/src/dependencies.d .build_ano/pro/arduino/dependencies.d .build_ano/pro/Servo/dependencies.d .build_ano/pro/EEPROM/dependencies.d .build_ano/pro/Wire/dependencies.d

all : .build_ano/pro/firmware.hex
	@true

