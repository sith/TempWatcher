#include <unity.h>
#include <Arduino.h>
#include <SerialTemperatureDisplay.cpp>



void test_display_temperature(void) {
    SerialTemperatureDisplay serialTemperatureDisplay;
    serialTemperatureDisplay.show(123);
    TEST_ASSERT_TRUE_MESSAGE(Serial.available(), "No data in serial port");
//    TEST_ASSERT_EQUAL_MESSAGE("Temp: 123F", Serial.readStringUntil('\n'), "Messages are not equal")
};


void setup() {
    UNITY_BEGIN();
}

void loop() {
    RUN_TEST(test_display_temperature);
    UNITY_END();
}
