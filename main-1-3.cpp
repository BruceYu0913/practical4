#include <iostream>
#include <ctime>
#include "ParkingLot.h"
#include "Vehicle.h"

int main() {
    ParkingLot lot(10);

    for (int i = 1; i <= 5; ++i) {
        if (!lot.parkVehicle(new Car(i))) break;
    }

    for (int i = 6; i <= 8; ++i) {
        if (!lot.parkVehicle(new Bus(i))) break;
    }

    for (int i = 9; i <= 10; ++i) {
        if (!lot.parkVehicle(new Motorbike(i))) break;
    }

    std::cout << "Waiting for 15 seconds...\n";
    std::time_t start = std::time(nullptr);
    while (difftime(std::time(nullptr), start) < 15) {
    }

    int overstaying = lot.countOverstayingVehicles(15);
    std::cout << "Number of vehicles that overstayed: " << overstaying << std::endl;

    return 0;
}