#include "../include/bobbersCalcDisplay.h"

void setupLCD(LiquidCrystal *liquidCrystal, const int col, const int row) {
    liquidCrystal->begin(col, row);
}
