#include <Arduino.h>
#include <Wire.h>
#include <TempWatcher.cpp>
#include <Timer.cpp>
#include "DHTTemperatureSensor.cpp"
#include "LCDTemperatureDisplay.cpp"
#include "SerialTemperatureLogger.cpp"


#include <DHT.h>


Timer timer = Timer(2000);
DHTTemperatureSensor temperatureSensor = DHTTemperatureSensor(DHT22);
LCDTemperatureDisplay display = LCDTemperatureDisplay();
SerialTemperatureLogger temperatureLogger;
TempWatcher<DHTTemperatureSensor, Timer, LCDTemperatureDisplay, SerialTemperatureLogger> tempWatcher(
        temperatureSensor, timer, display, temperatureLogger);

void setup() {
    Serial.begin(9600);
    display.init();
    temperatureSensor.init();
    Serial.println("Initializing...");
}

void loop() {
    tempWatcher.execute();
}