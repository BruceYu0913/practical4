#include "Car.h"

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration(time_t durationCalcTime) const {
    int duration = static_cast<int>(durationCalcTime - timeOfEntry);
    return static_cast<int>(duration * 0.9);
}

Car::~Car() {}
