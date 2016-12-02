// This #include statement was automatically added by the Particle IDE.
#include "InternetButton/InternetButton.h"

InternetButton b = InternetButton();

int secondsSinceThisHourStarted;

void setup() {
  b.begin();
  secondsSinceThisHourStarted = 0;
  Particle.variable("secsInHr", secondsSinceThisHourStarted);
}

void loop() {
    secondsSinceThisHourStarted = 60*Time.minute()+Time.second();
}