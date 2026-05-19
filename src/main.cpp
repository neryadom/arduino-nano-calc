#include "../include/bobbersQueue.h"
#include "bobbersCalcDisplay.h"

#include <Arduino.h>
#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

/* MAIN FUNCTIONS START */

void setup() {
	Queue queue;
	setupLCD(&lcd, 16, 2);
}

void loop() {
	lcd.setCursor(0, 0);
	lcd.print("HELLO");
	lcd.setCursor(0, 1);
	lcd.print("BOBBERS");
}

/* MAIN FUNCTIONS END */