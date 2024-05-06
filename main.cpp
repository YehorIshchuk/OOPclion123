#include <iostream>
#include <string>
#include "Staff.h"
#include "Waiter.h"
#include "Cook.h"
#include "Customer.h"
#include "CreditCard.h"
#include "Vehicle.h"
#include "Car.h"

/*using namespace std;

class Staff {
protected:
    string name;
    int age;
    string designation;

public:
    Staff(const string& name, int age, const string& designation)
            : name(name), age(age), designation(designation) {}

           ~Staff(){};

    void display() {
        cout << "Name: " << name <<endl;
        cout << "Age: " << age << endl;
        cout << "Designation: " << designation << endl;
    }
};


class Waiter : public Staff {
private:
    int experienceYears;

public:
    Waiter(const string& name, int age, int experienceYears)
            : Staff(name, age, "Waiter"), experienceYears(experienceYears) {}

~Waiter(){};

    void display() {
        Staff::display();
        cout << "Experience (years): " << experienceYears << endl;
    }
};


class Cook : public Staff {
private:
    string speciality;

public:
    Cook(const string& name, int age, const string& speciality)
            : Staff(name, age, "Cook"), speciality(speciality) {}
~Cook(){};

    void display() {
        Staff::display();
        cout << "Speciality: " << speciality << endl;
    }
};


class Customer {
private:
    string name;
    int age;
public:
    Customer(const string& n, int a) : name(n), age(a) {}

    ~Customer(){};

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }
};

class CreditCard {
private:
    Customer customer;
    long cardNumber;
public:
    CreditCard(const string& n, int a, long cn) : customer(n, a), cardNumber(cn) {}

    ~CreditCard(){};

    Customer getCustomer() const {
        return customer;
    }

    long getCardNumber() const {
        return cardNumber;
    }
};


class Vehicle {



public:
    string brand;

    // Default constructor
    Vehicle(const string& brand) : brand(brand) {}

    // Copy constructor
    Vehicle(const Vehicle& other) : brand(other.brand) {}

    // Move constructor
    Vehicle(Vehicle&& other) noexcept : brand(move(other.brand)) {}

    ~Vehicle(){};

    //  operator
    Vehicle& operator=(const Vehicle& other) {
        if (this != &other) {
            brand = other.brand;
        }
        return *this;
    }


    void display() const {
        cout << "Brand: " << brand << endl;
    }
};


class Car : public Vehicle {
private:
    int numWheels;

public:
    // Default constructor
    Car(const string& brand, int numWheels) : Vehicle(brand), numWheels(numWheels) {}

    // Copy constructor
    Car(const Car& other) : Vehicle(other), numWheels(other.numWheels) {}

    // Move constructor
    Car(Car&& other) noexcept : Vehicle(move(other)), numWheels(std::move(other.numWheels)) {}

    ~Car(){};

    //  operator
    Car& operator=(const Car& other) {
        if (this != &other) {
            Vehicle::operator=(other);
            numWheels = other.numWheels;
        }
        return *this;
    }


    void display() const {
        cout << "Car - ";
        Vehicle::display();
        cout << "Number of wheels: " << numWheels << endl;
    }
};*/



int main() {

    Waiter waiter("John", 25, 3);


    Cook cook("Alice", 30, "Italian Cuisine");


    cout << "Waiter Information:" << endl;
    waiter.display();
    cout << endl;

    cout <<  "Cook Information:" << endl;
    cook.display();
    cout<<endl;

    cout<<"Customer Info:"<<endl;

    CreditCard card("John Doe", 30, 1234567890123456);
    cout << "Customer Name: " << card.getCustomer().getName() << endl;
    cout << "Customer Age: " << card.getCustomer().getAge() << endl;
    cout << "Credit Card Number: " << card.getCardNumber() << endl;

    Vehicle originalVehicle("Generic Vehicle");
    Car originalCar("Toyota", 4);


    std::cout << "\nDetails of car:\n";
    originalCar.display();




    return 0;
}

