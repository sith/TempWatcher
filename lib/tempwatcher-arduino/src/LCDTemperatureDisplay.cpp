#include <LiquidCrystal.h>
#include <Wire.h>
#include "LCDTemperatureDisplay.h"
void LCDTemperatureDisplay::show(float temperature) {
    lcd.setCursor(0, 1);
    lcd.print("Temp = ");
    lcd.print(temperature);
    lcd.print((char) 223);
    lcd.print("F");
}

void LCDTemperatureDisplay::init() {
    lcd.begin(16, 2);
}
