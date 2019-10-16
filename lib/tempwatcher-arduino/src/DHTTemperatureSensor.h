//
// Created by Oleksandra Baukh on 10/13/19.
//

#ifndef TEMPWATCHER_DHTTEMPERATURESENSOR_H
#define TEMPWATCHER_DHTTEMPERATURESENSOR_H

#include <DHT.h>

class DHTTemperatureSensor {
    DHT dht;
public:
    explicit DHTTemperatureSensor(uint8_t type);

public:
    void init();
    float readTemperature();
};


#endif //TEMPWATCHER_DHTTEMPERATURESENSOR_H
