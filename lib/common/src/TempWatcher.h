//
// Created by Oleksandra Baukh on 10/12/19.
//

#ifndef TEMPWATCHER_TEMPWATCHER_H
#define TEMPWATCHER_TEMPWATCHER_H

template<
        typename TEMPERATURE_SENSOR,
        typename TIMER,
        typename DISPLAY
>
class TempWatcher {
    TEMPERATURE_SENSOR &temperatureSensor;
    TIMER &timer;
    DISPLAY &display;
public:
    TempWatcher(TEMPERATURE_SENSOR &temperatureSensor, TIMER &timer, DISPLAY &display);

    void execute();
};

#endif //TEMPWATCHER_TEMPWATCHER_H
