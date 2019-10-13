#include <Arduino.h>
#include <unity.h>
#include <Timer.cpp>

// void setUp(void) {
// // set stuff up here
// }

// void tearDown(void) {
// // clean stuff up here
// }

void test_timer(void) {
    Timer timer(100);

    TEST_ASSERT_FALSE_MESSAGE(timer.isExpired(), "Timer must not expire right after creation");

    delay(50);
    TEST_ASSERT_FALSE_MESSAGE(timer.isExpired(), "Timer must not expire after 50ms");

    delay(51);
    TEST_ASSERT_TRUE_MESSAGE(timer.isExpired(), "Timer must expire after 100ms");

    delay(50);
    TEST_ASSERT_FALSE_MESSAGE(timer.isExpired(), "Timer must not expire at 150ms");

    delay(50);
    TEST_ASSERT_TRUE_MESSAGE(timer.isExpired(), "Timer must expire at 200ms");
}

void setup() {
    UNITY_BEGIN();
}

void loop() {

    RUN_TEST(test_timer);
    UNITY_END();
}