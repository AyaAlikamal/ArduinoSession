#include <Arduino.h>

int Number = 9;

void setup() {
Serial.begin(9600);
}

void loop() {
if(Number % 2 == 0){
Serial.println(" The number is even");
} 
else if(Number % 2 == 1){
 Serial.println(" The number is odd"); 
}
else{}

}
