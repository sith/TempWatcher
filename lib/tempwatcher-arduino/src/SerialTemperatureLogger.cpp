//
// Created by Oleksandra Baukh on 10/14/19.
//

#include "SerialTemperatureLogger.h"
#include <Arduino.h>

void SerialTemperatureLogger::log(float temperature) {
    Serial.print("tempwatcher");
    Serial.print("_");
    Serial.print(millis());
    Serial.print("_");
    Serial.print(temperature);
    Serial.println();
}
