#include <iostream>
#include <string>
#include <limits>
#include <ctime>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() {
    int numVehicles;
    cout << "Enter the number of vehicles: ";
    cin >> numVehicles;

    Vehicle** vehicles = new Vehicle*[numVehicles];

    for (int i = 0; i < numVehicles; ++i) {
        string type;
        int id;
        cout << "Enter type and ID for vehicle " << i + 1 << ": ";
        cin >> type >> id;

        if (type == "Car") {
            vehicles[i] = new Car(id);
        } else if (type == "Bus") {
            vehicles[i] = new Bus(id);
        } else if (type == "Motorbike") {
            vehicles[i] = new Motorbike(id);
        } else {
            cout << "Unknown vehicle type. Skipped.\n";
            vehicles[i] = nullptr;
        }
    }

    cout << "\nPress ENTER to start duration calculation...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    time_t durationCalcTime = time(nullptr);

    cout << "\nParking durations (in seconds):\n";
    for (int i = 0; i < numVehicles; ++i) {
        if (vehicles[i] != nullptr) {
            cout << "Vehicle ID: " << vehicles[i]->getID()
                 << ", Duration: " << vehicles[i]->getParkingDuration(durationCalcTime)
                 << " seconds\n";
        }
    }

    for (int i = 0; i < numVehicles; ++i) {
        delete vehicles[i];
    }
    delete[] vehicles;

    return 0;
}
