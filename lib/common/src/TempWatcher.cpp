//
// Created by Oleksandra Baukh on 10/12/19.
//

#include "TempWatcher.h"

template<typename TEMP_SENSOR, typename TIMER, typename DISPLAY>
void TempWatcher<TEMP_SENSOR, TIMER, DISPLAY>::execute() {
    if (timer.isExpired()) {
        int temperature = temperatureSensor.readTemperature();
        display.show(temperature);
    }
}

template<typename TEMPERATURE_SENSOR, typename TIMER, typename DISPLAY>
TempWatcher<TEMPERATURE_SENSOR, TIMER, DISPLAY>::TempWatcher(TEMPERATURE_SENSOR &temperatureSensor, TIMER &timer,
                                                             DISPLAY &display):
        temperatureSensor(temperatureSensor),
        timer(timer),
        display(display) {

}


