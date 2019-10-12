#include <unity.h>
#include <TempWatcher.h>
#include <TempWatcher.cpp>
#include "TempWatcherMocks.h"

MockSensor sensor;
MockTimer timer;
MockDisplay display;

TempWatcher<MockSensor, MockTimer, MockDisplay> tempWatcher(sensor, timer, display);

void setUp(void) {
    sensor.temperature = -1;
    timer.expired = false;
    display.displayed = false;
    display.displayedTemperature = -1;
}

void test_does_nothing_if_timer_has_not_expired(void) {
    tempWatcher.execute();

    TEST_ASSERT_FALSE(display.displayed);
}

void test_reads_and_displays_temperature_when_expired(void) {
    int actualTemperature = 100;
    sensor.temperature = actualTemperature;
    timer.expired = true;

    tempWatcher.execute();

    TEST_ASSERT_TRUE(display.displayed);
    TEST_ASSERT_EQUAL(100, display.displayedTemperature);
}


int main(int argc, char **argv) {
    UNITY_BEGIN();
    RUN_TEST(test_does_nothing_if_timer_has_not_expired);
    RUN_TEST(test_reads_and_displays_temperature_when_expired);
    UNITY_END();
    return 0;
}



