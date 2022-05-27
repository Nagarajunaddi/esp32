#include <Arduino.h>

void setup() {
  pinMode(4, OUTPUT);   
  pinMode(5, OUTPUT);   
  pinMode(2, OUTPUT);   
   
 // put your setup code here, to run once:
}

void loop() {
  digitalWrite(2, HIGH);   
  digitalWrite(4, HIGH);   
  digitalWrite(5, HIGH);   
  delay(500);
  digitalWrite(2, LOW);   
  digitalWrite(4, LOW);   
  digitalWrite(5, LOW);   
  delay(500);// put your main code here, to run repeatedly:
}