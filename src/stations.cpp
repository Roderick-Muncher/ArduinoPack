#include "stations.hpp"

void runStationA(DDBot& drivetrain) {
  //moveForward(500);
  //Serial.println("Move forward done");
  drivetrain.forward(255);
  delay(500);
  drivetrain.right(255);
  delay(500);
  drivetrain.left(255);
  delay(500);
  drivetrain.backward(255);
  delay(500);
  drivetrain.stop();
}
