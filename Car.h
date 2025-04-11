#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(int id);
    int getParkingDuration() const override;
    int getParkingDuration(time_t durationCalcTime) const override;
    ~Car();
};

#endif
