#ifndef STATIONS_HPP
#define STATIONS_HPP

#include "line_following.hpp"

enum class Station {
    NONE,
    STATION_A,
    STATION_B,
    STATION_C,
    STATION_D
};

void runStationA(DDBot& drivetrain);

#endif // STATIONS_HPP
