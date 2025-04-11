#ifndef VHICLE_H
#define VHICLE_H

#include <iostream>
#include <ctime>
using namespace std;

class Vehicle
{
protected:
    time_t timeOfEntry;
    int ID;

public:
    Vehicle(time_t t, int id) : timeOfEntry(t), ID(id) {}

    int getID() const {
        return ID;
    }

    virtual int getParkingDuration() const {
        int duration = time(nullptr) - timeOfEntry;
        return duration;
    }

    virtual ~Vehicle() {}
};

class Car : public Vehicle
{
public:     
    Car(time_t t, int id) : Vehicle(t, id) {}
    ~Car() {}

    int getParkingDuration() const override {
        int duration = time(nullptr) - timeOfEntry;
        return static_cast<int>(duration * 0.5);
    }
};

class Bus : public Vehicle
{
public:
    Bus(time_t t, int id) : Vehicle(t, id) {}
    ~Bus() {}

    int getParkingDuration() const override {
        int duration = time(nullptr) - timeOfEntry;
        return static_cast<int>(duration * 0.75);
    }
};

class Motorbike : public Vehicle
{
public:
    Motorbike(time_t t, int id) : Vehicle(t, id) {}
    ~Motorbike() {}

    int getParkingDuration() const override {
        int duration = time(nullptr) - timeOfEntry;
        return static_cast<int>(duration * 0.85);
    }
};

#endif
