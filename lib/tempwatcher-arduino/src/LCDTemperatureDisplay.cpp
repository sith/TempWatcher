
#include "LCDTemperatureDisplay.h"

void LCDTemperatureDisplay::show(float temperature) {
    lcd.setCursor(0, 1);
    lcd.print("Temp = ");
    lcd.print(temperature);
    lcd.print((char) 223);
    lcd.print("F");
}

void LCDTemperatureDisplay::init() {
    int status;
    status = lcd.begin(LCD_COLS, LCD_ROWS);
    if (status) {
        status = -status;
        hd44780::fatalError(status);
    }
}
