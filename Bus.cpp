#include "Bus.h"

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() const {
    return static_cast<int>((time(nullptr) - timeOfEntry) * 0.75);
}
int Bus::getParkingDuration(time_t durationCalcTime) const {
    return static_cast<int>((durationCalcTime - timeOfEntry) * 0.75);
}

Bus::~Bus() {}
