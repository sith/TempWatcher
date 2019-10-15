//
// Created by Oleksandra Baukh on 10/12/19.
//

#include "TempWatcher.h"

template<typename TEMP_SENSOR, typename TIMER, typename TEMPERATURE_DISPLAY>
void TempWatcher<TEMP_SENSOR, TIMER, TEMPERATURE_DISPLAY>::execute() {
    if (timer.isExpired()) {
        float temperature = temperatureSensor.readTemperature();
        display.show(temperature);
    }
}

template<typename TEMPERATURE_SENSOR, typename TIMER, typename TEMPERATURE_DISPLAY>
TempWatcher<TEMPERATURE_SENSOR, TIMER, TEMPERATURE_DISPLAY>::TempWatcher(TEMPERATURE_SENSOR &temperatureSensor, TIMER &timer,
                                                                         TEMPERATURE_DISPLAY &display):
        temperatureSensor(temperatureSensor),
        timer(timer),
        display(display) {

}


