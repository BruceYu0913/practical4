#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() const {
    return static_cast<int>((time(nullptr) - timeOfEntry) * 0.85);
}
int Motorbike::getParkingDuration(time_t durationCalcTime) const {
    return static_cast<int>((durationCalcTime - timeOfEntry) * 0.85);
}

Motorbike::~Motorbike() {}
