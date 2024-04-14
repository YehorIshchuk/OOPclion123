#include "Salary.h"
#include <iostream>

using namespace std;

Salary::Salary() : salary(20000), tips(50) {
    cout<<"Salary constructor was called"<<endl;
}

Salary::Salary(const Salary& other) : salary(other.salary), tips(other.tips) {
    cout << "Salary copy constructor" << endl;
}

Salary::~Salary() {
    cout << "Salary destructor was called" << endl;
}

