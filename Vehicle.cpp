#include "Vehicle.h"
#include <ctime>

Vehicle::Vehicle(int id) {
    ID = id;
    timeOfEntry = time(nullptr);
}

int Vehicle::getID() const {
    return ID;
}

Vehicle::~Vehicle() {}
