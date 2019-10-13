//
// Created by Oleksandra Baukh on 10/12/19.
//

#ifndef TEMPWATCHER_TEMPWATCHER_H
#define TEMPWATCHER_TEMPWATCHER_H

template<
        typename TEMPERATURE_SENSOR,
        typename TIMER,
        typename TEMPERATURE_DISPLAY
>
class TempWatcher {
    TEMPERATURE_SENSOR &temperatureSensor;
    TIMER &timer;
    TEMPERATURE_DISPLAY &display;
public:
    TempWatcher(TEMPERATURE_SENSOR &temperatureSensor, TIMER &timer, TEMPERATURE_DISPLAY &display);

    void execute();
};

#endif //TEMPWATCHER_TEMPWATCHER_H
