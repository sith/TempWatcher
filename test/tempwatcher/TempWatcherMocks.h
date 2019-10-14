//
// Created by Oleksandra Baukh on 10/12/19.
//

#ifndef TEMPWATCHER_TEMPWATCHERMOCKS_H
#define TEMPWATCHER_TEMPWATCHERMOCKS_H

class MockSensor {
public:
    int temperature = -1;

    int readTemperature() {
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

    void show(int temperature) {
        this->displayed = true;
        this->displayedTemperature = temperature;
    }
};

#endif //TEMPWATCHER_TEMPWATCHERMOCKS_H

