//
// Created by Oleksandra Baukh on 10/12/19.
//

#ifndef TEMPWATCHER_TEMPWATCHERMOCKS_H
#define TEMPWATCHER_TEMPWATCHERMOCKS_H

class MockSensor {
public:
    float temperature = -1;

    float readTemperature() {
        return temperature;
    }
};

class MockTimer {
public:
    bool expired = false;

    bool isExpired() {
        return expired;
    }
};

class MockDisplay {
public:
    int displayedTemperature;
    bool displayed;

    void show(float temperature) {
        this->displayed = true;
        this->displayedTemperature = temperature;
    }
};

class MockTemperatureLogger {
public:
    bool logged = false;
    void log(float temperature) {
        this->logged = true;
    }
};


#endif //TEMPWATCHER_TEMPWATCHERMOCKS_H

