/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World" to the LCD
 and shows the time.

 Circuit:

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
 
 Modified from:
 https://www.arduino.cc/en/Tutorial/LiquidCrystalScroll
 https://www.allaboutcircuits.com/projects/interface-an-lcd-with-an-arduino/
 */

#include "LiquidCrystal.h"
#define SCROLL_DELAY 500
#define FULL_LOOP_DELAY 2000

// Initialize the library by providing the number of pins to it.
LiquidCrystal lcd(8,9,4,5,6,7);

void setup() {
  lcd.begin(16,2);

  // Set cursor position to start of first line on the LCD.
  lcd.setCursor(0,0);
  // Text to print on the first line.
  lcd.print("  Hello World!");
  // Set cusor position to start of next line.
  lcd.setCursor(0,1);
  lcd.print("    Jack Wan");
}

void loop(){
  // scroll 14 positions (string length of "  Hello World!") to the left to move it offscreen left.
  for (int positionCounter = 0; positionCounter < 14; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // Wait a bit:
    delay(SCROLL_DELAY);
  }

  // scroll 28 positions (string length[14] + display length[16] - right blank length[2]) to the right to move it offscreen right.
  for (int positionCounter = 0; positionCounter < 28; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(SCROLL_DELAY);
  }

  // scroll 14 positions (display length[16] - right blank length[2]) to the left
  // to move it back to center:
  for (int positionCounter = 0; positionCounter < 14; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(SCROLL_DELAY);
  }

  // delay at the end of the full loop:
  delay(FULL_LOOP_DELAY);
}
