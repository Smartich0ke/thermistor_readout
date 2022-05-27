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
  temp = 200 - 68 * log10(1000-v);
  Serial.print(temp);
  Serial.print("C\n");
  delay(1000);
}