#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() : phonenumber(524384783), person("Oleksandr Petrenko") {}

Person::~Person() {
    cout << "Person destructor was called" << std::endl;
}

void Person::Order() {
    cout <<"I would like to order Pizza" << std::endl;
    cout << "Name and Surname: " << person << std::endl;
    cout << "Phone Number: " << phonenumber << std::endl;
}