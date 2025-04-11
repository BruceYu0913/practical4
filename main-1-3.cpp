#include <iostream>
#include <ctime>
#include "ParkingLot.h"
#include "Vehicle.h"

int main() {
    ParkingLot lot(10);

    // Park 5 Cars
    for (int i = 1; i <= 5; ++i) {
        if (!lot.parkVehicle(new Car(i))) break;
    }

    // Park 3 Buses
    for (int i = 6; i <= 8; ++i) {
        if (!lot.parkVehicle(new Bus(i))) break;
    }

    // Park 2 Motorbikes
    for (int i = 9; i <= 10; ++i) {
        if (!lot.parkVehicle(new Motorbike(i))) break;
    }

    // Wait for some time to simulate parking duration
    std::cout << "Waiting for 15 seconds...\n";
    std::time_t start = std::time(nullptr);
    while (difftime(std::time(nullptr), start) < 15) {
        // Wait
    }

    int overstaying = lot.countOverstayingVehicles(15);
    std::cout << "Number of vehicles that overstayed: " << overstaying << std::endl;

    return 0;
}