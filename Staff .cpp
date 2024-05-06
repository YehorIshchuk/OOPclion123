#include "Staff.h"
#include<iostream>

using namespace std;



Staff::Staff(const string& name, int age, const string& designation)
        : name(name), age(age), designation(designation) {}

Staff::~Staff() {}

void Staff::display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Designation: " << designation << endl;
}
