#define DHTPIN 2
#include "DHTTemperatureSensor.h"
float DHTTemperatureSensor::readTemperature() {
    float temperature = dht.readTemperature(true);
    return temperature;
}

void DHTTemperatureSensor::init() {
    dht.begin();
}

DHTTemperatureSensor::DHTTemperatureSensor(uint8_t type) : dht{DHTPIN, type} {}
