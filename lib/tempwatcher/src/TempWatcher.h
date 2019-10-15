//
// Created by Oleksandra Baukh on 10/12/19.
//

#ifndef TEMPWATCHER_TEMPWATCHER_H
#define TEMPWATCHER_TEMPWATCHER_H

template<
        typename TEMPERATURE_SENSOR,
        typename TIMER,
        typename TEMPERATURE_DISPLAY,
        typename TEMPERATURE_LOGGER
>
class TempWatcher {
    TEMPERATURE_SENSOR &temperatureSensor;
    TIMER &timer;
    TEMPERATURE_DISPLAY &display;
    TEMPERATURE_LOGGER &temperatureLogger;
public:
    TempWatcher(TEMPERATURE_SENSOR &temperatureSensor, TIMER &timer, TEMPERATURE_DISPLAY &display,
                TEMPERATURE_LOGGER &temperatureLogger);

    void execute();
};

#endif //TEMPWATCHER_TEMPWATCHER_H
