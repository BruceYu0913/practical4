#include "Car.h"

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() const {
    return static_cast<int>((time(nullptr) - timeOfEntry) * 0.9);
}

int Car::getParkingDuration(time_t durationCalcTime) const {
    return static_cast<int>((durationCalcTime - timeOfEntry) * 0.9);
}


Car::~Car() {}
