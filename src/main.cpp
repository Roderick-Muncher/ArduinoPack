#include <Arduino.h>
#include <L298NX2.h>
#include "constants.hpp"

L298NX2 drivetrain(dt::EN_A, dt::IN1_A, dt::IN2_A, dt::EN_B, dt::IN1_B, dt::IN2_B);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Testing (pls work)");
  while (!Serial)
  {
    //do nothing
  }

  drivetrain.setSpeedA(120);
  drivetrain.setSpeedB(80);
}

void loop() {
  // put your main code here, to run repeatedly:
  drivetrain.runForB(3000, L298N::FORWARD);

  Serial.println("Testing (pls work)");
}
