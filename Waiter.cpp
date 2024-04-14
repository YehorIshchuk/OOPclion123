#include "Waiter.h"
#include <iostream>
using namespace std;

Waiter::Waiter() : Staff(), name("Ivan") {}

Waiter::~Waiter() {
    cout << "Waiter destructor was called" << std::endl;
}

void Waiter::Serve() const {
    cout << "I am " << position << std::endl;
    cout << "I am completing orders of customers" << std::endl;
    cout << "Salary: " << salary << std::endl;
    cout << "Name: " << name << std::endl;
}

void Waiter::Work() {
    cout << "Waiter is working" << std::endl;
}

void Waiter::ShowInfo() {
    cout << "Position: " << position << std::endl;
    cout << "Salary: " << salary << std::endl;
    cout << "Name: " << name << std::endl;
}
