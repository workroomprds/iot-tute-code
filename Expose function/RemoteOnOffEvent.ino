// This #include statement was automatically added by the Particle IDE.
#include "InternetButton/InternetButton.h"

InternetButton b = InternetButton();

void setup() {
  b.begin();
  Particle.function("turnOn", turnOnLamp);
  Particle.function("turnOff", turnOffLamp);
}

void loop() {
}

int turnOnLamp(String command) {
    b.ledOn(3, 255, 255, 255);
	Particle.publish("I'm on");
    return(1);
}

int turnOffLamp(String command) {
    b.ledOff(3);
	Particle.publish("I'm off");
    return(0);
}

