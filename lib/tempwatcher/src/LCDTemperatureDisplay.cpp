//
// Created by Oleksandra Baukh on 10/13/19.
//

#include "LCDTemperatureDisplay.h"
#include <LiquidCrystal.h>

void LCDTemperatureDisplay::show(int temperature) {
    lcd.setCursor(0, 1);
    lcd.print("Temperature: ");
    lcd.print(temperature);
    lcd.print((char) 223);
    lcd.print("F");
}

void LCDTemperatureDisplay::init() {
    lcd.begin(16, 2);
}
