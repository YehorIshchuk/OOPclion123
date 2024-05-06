#include "Car.h"
#include <iostream>

Car::Car(const string& brand, int numWheels) : Vehicle(brand), numWheels(numWheels) {}

Car::Car(const Car& other) : Vehicle(other), numWheels(other.numWheels) {}

Car::Car(Car&& other) noexcept : Vehicle(move(other)), numWheels(std::move(other.numWheels)) {}

Car::~Car() {}

Car& Car::operator=(const Car& other) {
    if (this != &other) {
        Vehicle::operator=(other);
        numWheels = other.numWheels;
    }
    return *this;
}

void Car::display() const {
    cout << "Car - ";
    Vehicle::display();
    cout << "Number of wheels: " << numWheels << endl;
}
