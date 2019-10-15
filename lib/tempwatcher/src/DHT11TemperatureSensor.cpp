//
// Created by Oleksandra Baukh on 10/13/19.
//

#include "DHT11TemperatureSensor.h"
float DHT11TemperatureSensor::readTemperature() {
    float temperature = dht.readTemperature(true);
    return temperature;
}

void DHT11TemperatureSensor::init() {
    dht.begin();
}
