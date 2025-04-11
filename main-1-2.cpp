#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
int main() {
    ParkingLot lot(10);

    while (lot.getCount() < 10) {
        int type, id;
        std::cout << "Enter vehicle type (1=Car, 2=Bus, 3=Motorbike) and ID (or -1 to stop): ";
        std::cin >> type;
        if (type == -1) break;
        std::cin >> id;

        Vehicle* vehicle = nullptr;
        switch(type) {
            case 1:
                vehicle = new Car(id);
                break;
            case 2:
                vehicle = new Bus(id);
                break;
            case 3:
                vehicle = new Motorbike(id);
                break;
            default:
                std::cout << "Invalid type. Using Car as default.\n";
                vehicle = new Car(id);
        }

        lot.parkVehicle(vehicle);
    }

    int idToUnpark;
    std::cout << "Enter ID of vehicle to unpark: ";
    std::cin >> idToUnpark;
    lot.unparkVehicle(idToUnpark);

    return 0;
}