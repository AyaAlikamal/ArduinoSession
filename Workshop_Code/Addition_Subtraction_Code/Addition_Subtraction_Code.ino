#include <Arduino.h>
int FirstNumber = 7;
int SecondNumber = 6;
int Result_1 = 0;
int Result_2 = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  Result_1 = FirstNumber + SecondNumber;
  Result_2 = FirstNumber - SecondNumber;
  Serial.print("The Addition Result is ");
  Serial.println(Result_1);
  Serial.print("The subtraction Result is ");
  Serial.println(Result_2);
}
