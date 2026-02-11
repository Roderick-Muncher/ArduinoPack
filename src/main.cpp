#include <Arduino.h>
#include "devices.hpp" // You may name your parts in here, but we have named them for you
#include "constants.hpp"

void setup() {
  Serial.begin(115200);
  while (!Serial && millis() < 2000) {}

  Serial.println("Initializing…");
  drivetrain.setPinModes();
  chassis.stop();
  Serial.println("Initialization complete");

  // Put your code below:

  chassis.moveTank(255,255,1000);

  //

  Serial.println("Done");

}

void loop() {
  Serial.println(pulseIn(color::OUT_PIN, LOW));
  delay(1000);
}
