#include <Arduino.h>

#define Led_Pin 6
//int led_pin = 6;
void setup() {
pinMode(Led_Pin, OUTPUT);
}

void loop() {
digitalWrite(Led_Pin, HIGH);
delay(1000);
digitalWrite(Led_Pin, LOW);
delay(1000);
}

