#include "Bus.h"

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration(time_t durationCalcTime) const {
    int duration = static_cast<int>(durationCalcTime - timeOfEntry);
    return static_cast<int>(duration * 0.75);
}

Bus::~Bus() {}
