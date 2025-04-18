#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle {
public:
    Bus(int id);
    int getParkingDuration() const override;
    int getParkingDuration(time_t durationCalcTime) const override;
    ~Bus();
};

#endif
