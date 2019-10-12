//
// Created by Oleksandra Baukh on 10/11/19.
//
#include <Arduino.h>
#include <common/SumOperation.h>

void setup(){}

void loop(){
    delay(1000);
    Serial.print("Hello world");
    SumOperation sumOperation;
    sumOperation.sum(1, 2);

}