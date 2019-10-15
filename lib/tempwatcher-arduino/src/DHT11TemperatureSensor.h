//
// Created by Oleksandra Baukh on 10/13/19.
//

#ifndef TEMPWATCHER_DHT11TEMPERATURESENSOR_H
#define TEMPWATCHER_DHT11TEMPERATURESENSOR_H

#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

class DHT11TemperatureSensor {
    DHT dht{DHTPIN, DHTTYPE};
public:
    void init();
    float readTemperature();
};


#endif //TEMPWATCHER_DHT11TEMPERATURESENSOR_H
