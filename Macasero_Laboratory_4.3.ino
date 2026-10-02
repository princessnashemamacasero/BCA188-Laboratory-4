#include <Arduino.h>

const int OUTPUT_PIN = 4;

void setup() {
  analogWriteResolution(OUTPUT_PIN, 8);
  analogWrite(OUTPUT_PIN, 0);
}

void loop() {
  analogWrite(OUTPUT_PIN, 0);
  delay(5000);

  analogWrite(OUTPUT_PIN, 64);
  delay(5000);

  analogWrite(OUTPUT_PIN, 128);
  delay(5000);

  analogWrite(OUTPUT_PIN, 192);
  delay(5000);

  analogWrite(OUTPUT_PIN, 255);
  delay(5000);
}