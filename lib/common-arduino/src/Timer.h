//
// Created by Oleksandra Baukh on 10/12/19.
//

#ifndef TEMPWATCHER_TIMER_H
#define TEMPWATCHER_TIMER_H


class Timer {
private:
    long timerValue = 0;
public:
    Timer(long timerValue);

private:
    long nextExpirationValue = timerValue;
public:
    bool isExpired();
};


#endif //TEMPWATCHER_TIMER_H
