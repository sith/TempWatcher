//
// Created by Oleksandra Baukh on 10/13/19.
//

#ifndef TEMPWATCHER_LCDTEMPERATUREDISPLAY_H
#define TEMPWATCHER_LCDTEMPERATUREDISPLAY_H


const int LCD_COLS = 16;
const int LCD_ROWS = 2;

#include <Wire.h>
#include <hd44780.h>                       // main hd44780 header
#include <hd44780ioClass/hd44780_I2Cexp.h> // i2c expander i/o class header


class LCDTemperatureDisplay {
hd44780_I2Cexp lcd;
public:
    void init();

    void show(float temperature);

};


#endif //TEMPWATCHER_LCDTEMPERATUREDISPLAY_H
