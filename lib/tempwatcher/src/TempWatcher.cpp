//
// Created by Oleksandra Baukh on 10/12/19.
//

#include "TempWatcher.h"

template<typename TEMPERATURE_SENSOR, typename TIMER, typename TEMPERATURE_DISPLAY, typename TEMPERATURE_LOGGER>
TempWatcher<TEMPERATURE_SENSOR, TIMER, TEMPERATURE_DISPLAY, TEMPERATURE_LOGGER>::TempWatcher(
        TEMPERATURE_SENSOR &temperatureSensor, TIMER &timer, TEMPERATURE_DISPLAY &display,
        TEMPERATURE_LOGGER &temperatureLogger) :temperatureSensor(temperatureSensor), timer(timer), display(display),
                                                temperatureLogger(temperatureLogger) {}

template<typename TEMPERATURE_SENSOR, typename TIMER, typename TEMPERATURE_DISPLAY, typename TEMPERATURE_LOGGER>
void TempWatcher<TEMPERATURE_SENSOR, TIMER, TEMPERATURE_DISPLAY, TEMPERATURE_LOGGER>::execute() {
    if (timer.isExpired()) {
        float temperature = temperatureSensor.readTemperature();
        display.show(temperature);
        temperatureLogger.log(temperature);
    }
}
