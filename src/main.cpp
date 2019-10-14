#include <Arduino.h>
#include <TempWatcher.cpp>
#include <Timer.cpp>
#include <DHT11TemperatureSensor.cpp>
#include <LCDTemperatureDisplay.cpp>

Timer timer = Timer(500);
DHT11TemperatureSensor temperatureSensor;
LCDTemperatureDisplay display = LCDTemperatureDisplay();
TempWatcher<DHT11TemperatureSensor, Timer, LCDTemperatureDisplay> tempWatcher(temperatureSensor, timer, display);

void setup() {
    Serial.begin(9600);
    display.init();
    Serial.println("Initializing...");
}

void loop() {
    tempWatcher.execute();
}