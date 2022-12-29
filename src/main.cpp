#include <Arduino.h>
#define led LED_BUILTIN
void setup() { pinMode(led, OUTPUT); }

void loop() {
  digitalWrite(led, HIGH);
  delay(3000);
  digitalWrite(led, LOW);
  delay(1000);
}