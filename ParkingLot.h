#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

class ParkingLot {
private:
    Vehicle** vehicles;
    int maxCapacity;
    int currentCount;

public:
    ParkingLot(int capacity);
    ~ParkingLot();
    int getCount() const;
    bool parkVehicle(Vehicle* vehicle);
    bool unparkVehicle(int id);
    int countOverstayingVehicles(int maxParkingDuration) const;
};

#endif 