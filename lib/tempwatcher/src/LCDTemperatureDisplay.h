//
// Created by Oleksandra Baukh on 10/13/19.
//

#ifndef TEMPWATCHER_LCDTEMPERATUREDISPLAY_H
#define TEMPWATCHER_LCDTEMPERATUREDISPLAY_H

#include <LiquidCrystal.h>
#include <Wire.h>

#define   CONTRAST_PIN   9
#define   BACKLIGH_PIN  7
#define   CONTRAST       110

class LCDTemperatureDisplay {
    LiquidCrystal lcd{7, 8, 9, 10, 11, 12};
public:
    void init();

    void show(int temperature);

};


#endif //TEMPWATCHER_LCDTEMPERATUREDISPLAY_H
