

#ifndef LAB4_CAR_H
#define LAB4_CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numWheels;

public:
    Car(const string& brand, int numWheels);
    Car(const Car& other);
    Car(Car&& other) noexcept;
    ~Car();

    Car& operator=(const Car& other);

    void display() const;
};

#endif //LAB4_CAR_H
