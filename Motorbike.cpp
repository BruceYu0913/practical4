#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration(time_t durationCalcTime) const {
    int duration = static_cast<int>(durationCalcTime - timeOfEntry);
    return static_cast<int>(duration * 0.85);
}

Motorbike::~Motorbike() {}
