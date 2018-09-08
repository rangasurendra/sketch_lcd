/*

https://www.arduino.cc/en/Tutorial/HelloWorld

 Name:		Sketch_LCD.ino
 Created:	9/8/2018 10:20:15 PM
 Author:	Ranga Surendra
*/

#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// the setup function runs once when you press reset or power the board
void setup() {
	// set up the LCD's number of columns and rows:
	lcd.begin(16, 2);
	// Print a message to the LCD.
	//lcd.print("hello, world!");
}

// the loop function runs over and over again until power down or reset
void loop() {
	// set the cursor to column 0, line 1
	// (note: line 1 is the second row, since counting begins with 0):
	//lcd.setCursor(0, 1);
	// print the number of seconds since reset:
	//lcd.print(millis() / 1000);

	// set the cursor to (0,0):
	lcd.setCursor(0, 0);
	// print from 0 to 9:
	for (int thisChar = 0; thisChar < 10; thisChar++) {
		lcd.print(thisChar);
		delay(500);
	}

	// set the cursor to (16,1):
	lcd.setCursor(16, 1);
	// set the display to automatically scroll:
	lcd.autoscroll();
	// print from 0 to 9:
	for (int thisChar = 0; thisChar < 10; thisChar++) {
		lcd.print(thisChar);
		delay(500);
	}
	// turn off automatic scrolling
	lcd.noAutoscroll();

	// clear screen for the next loop:
	lcd.clear();
}
