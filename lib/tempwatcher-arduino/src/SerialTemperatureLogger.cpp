//
// Created by Oleksandra Baukh on 10/14/19.
//

#include "SerialTemperatureLogger.h"
#include <Arduino.h>

void SerialTemperatureLogger::init() {
    if (!Serial) {
        Serial.begin(9600);
        Serial.println("SerialTemperatureLogger initialized Serial");
    }
}

void SerialTemperatureLogger::log(float temperature) {
    Serial.print("tempwatcher_");
    Serial.print("_");
    Serial.print(millis());
    Serial.print("_");
    Serial.print(temperature);
    Serial.println();
}
