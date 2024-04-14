#include "Staff.h"
#include <iostream>

using namespace std;

Staff::Staff() : staffSalary(), freecars(3), priceofdelivery(75), salary(20000), tips(50), dish("Pasta") {

    cout <<"Staff constructor was called"<<endl;
}

Staff::Staff(const Staff& other) : staffSalary(other.staffSalary), freecars(other.freecars), priceofdelivery(other.priceofdelivery),
                                   salary(other.salary), tips(other.tips), dish(other.dish) {
    cout << "Staff copy constructor" << endl;
}

Staff::~Staff() {
    cout << "Staff destructor was called" << endl;
}

void Staff::PrintSalary() {
    cout << "Salary: " << staffSalary.salary << endl;
    cout << "Tips: " << staffSalary.tips << endl;
}

