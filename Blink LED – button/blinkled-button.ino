// This #include statement was automatically added by the Particle IDE.
#include "InternetButton/InternetButton.h"

InternetButton b = InternetButton();

void setup() {
  b.begin();
}

void loop() {
  b.ledOn(6, 0, 0, 255);
  delay(1000);
  b.ledOff(6);
  delay(500);
}