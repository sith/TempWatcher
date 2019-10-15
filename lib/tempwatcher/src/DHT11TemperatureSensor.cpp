//
// Created by Oleksandra Baukh on 10/13/19.
//

#include "DHT11TemperatureSensor.h"

float DHT11TemperatureSensor::readTemperature() {
    return dht.readTemperature();
}

void DHT11TemperatureSensor::init() {
    dht.begin();
}
