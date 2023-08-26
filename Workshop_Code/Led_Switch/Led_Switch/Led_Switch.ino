#include <Arduino.h>

#define Led_Pin 6
#define Switch_Pin 7
void setup() {
 pinMode(Led_Pin , OUTPUT);
pinMode(Switch_Pin , INPUT);
}

void loop() {
 if(digitalRead(Switch_Pin)){
digitalWrite(Led_Pin , HIGH);
 }
 else{
   digitalWrite(Led_Pin , LOW);
 }

}
