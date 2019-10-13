//
// Created by Oleksandra Baukh on 10/12/19.
//

#include "Timer.h"
#include <Arduino.h>

bool Timer::isExpired() {
    if (millis()>=nextExpirationValue) {
        nextExpirationValue += timerValue;
        return true;
    }
    return false;
}

Timer::Timer(long timerValue) : timerValue(timerValue) {}
