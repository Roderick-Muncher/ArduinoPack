#include "stations.hpp"

void runStationA(DDBot& drivetrain) {
  //moveForward(500);
  //Serial.println("Move forward done");
  drivetrain.forward(255);
  delay(1000);
  drivetrain.clockwise(255);
  delay(1000);
  drivetrain.counterClockwise(255);
  delay(1000);
  drivetrain.backward(255);
  delay(1000);
  drivetrain.stop();
}
