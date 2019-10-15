#include <Arduino.h>
#include <TempWatcher.cpp>
#include <Timer.cpp>
#include "DHT11TemperatureSensor.cpp"
#include "LCDTemperatureDisplay.cpp"
#include "SerialTemperatureLogger.cpp"

Timer timer = Timer(2000);
DHT11TemperatureSensor temperatureSensor;
LCDTemperatureDisplay display = LCDTemperatureDisplay();
SerialTemperatureLogger temperatureLogger;
TempWatcher<DHT11TemperatureSensor, Timer, LCDTemperatureDisplay, SerialTemperatureLogger> tempWatcher(
        temperatureSensor, timer, display, temperatureLogger);

void setup() {
//    Serial.begin(9600);
    display.init();
    temperatureSensor.init();
    temperatureLogger.init();
    Serial.println("Initializing...");
}

void loop() {
    tempWatcher.execute();
}