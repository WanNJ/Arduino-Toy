/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "FYQ I LOVE YOU FOREVER 221" to the LCD
 and shows the time.

The circuit:

 * LCD RS pin to digital pin 8
 * LCD Enable pin to digital pin 9
 * LCD D4 pin to digital pin 4
 * LCD D5 pin to digital pin 5
 * LCD D6 pin to digital pin 6
 * LCD D7 pin to digital pin 7
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor: ends to +5V and ground, wiper to LCD VO pin

*/

#include "LiquidCrystal.h"

// initialize the library by providing the nuber of pins to it
LiquidCrystal lcd(8,9,4,5,6,7);

void setup() {
  lcd.begin(16,2);

  // Set cursor position to start of first line on the LCD.
  lcd.setCursor(0,0);
  // Text to print on the first line.
  lcd.print(" FYQ I LOVE YOU");
  // Set cusor position to start of next line.
  lcd.setCursor(0,1);
  lcd.print("   FOREVER 221");
}

void loop(){
    
}
