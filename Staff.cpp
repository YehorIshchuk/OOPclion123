
#include <iostream>
#include "Staff.h"

 using namespace std;



Staff::Staff() : position("Waiter"), salary(15000) {}

Staff::~Staff() {
    cout << "Staff destructor was called" << std::endl;
}

void Staff::Work() {
    cout << "Staff is working" << std::endl;
}

void Staff::ShowInfo() {
    cout << "Position: " << position << std::endl;
    cout << "Salary: " << salary << std::endl;
}