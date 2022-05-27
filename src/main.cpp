#include <Arduino.h>

#define THERMISTOR_PIN A0

int inputVal;
int v;
int temp;

void setup() {
  pinMode(THERMISTOR_PIN, INPUT);
  Serial.begin(115200);
}

void loop() {
  v = analogRead(THERMISTOR_PIN);
  //v = 1000 - 372 * 2;
  temp = 200 - 68 * log(1000-v);
  Serial.println(temp);
  delay(1000);
}