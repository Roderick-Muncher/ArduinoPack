#include "constants.hpp"
#include <DDBot.h>
#include <TCS3200.h>

extern DDBot drivetrain(drive::directionPins, drive::speedPins);
extern TCS3200 colorSensor(-1, -1, colour::S2, colour::S3, colour::OUT);
