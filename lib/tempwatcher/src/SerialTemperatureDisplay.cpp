#include <Arduino.h>
#include "SerialTemperatureDisplay.h"

void SerialTemperatureDisplay::show(int temperature) {
    String string = "Temperature: ";
    Serial.println(string + temperature + "F");
}
