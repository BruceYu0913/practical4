#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), currentCount(0) {
    vehicles = new Vehicle*[maxCapacity];
    for (int i = 0; i < maxCapacity; ++i) {
        vehicles[i] = nullptr;
    }
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < currentCount; ++i) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

int ParkingLot::getCount() const {
    return currentCount;
}

bool ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (currentCount >= maxCapacity) {
        std::cout << "The lot is full\n";
        return false;
    }
    vehicles[currentCount++] = vehicle;
    return true;
}

bool ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < currentCount; ++i) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            for (int j = i; j < currentCount - 1; ++j) {
                vehicles[j] = vehicles[j + 1];
            }
            currentCount--;
            vehicles[currentCount] = nullptr;
            return true;
        }
    }
    std::cout << "Vehicle not in the lot\n";
    return false;
}