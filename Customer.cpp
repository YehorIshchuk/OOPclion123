#include "Customer.h"

Customer::Customer(const string& n, int a) : name(n), age(a) {}

Customer::~Customer() {}

string Customer::getName() const {
    return name;
}

int Customer::getAge() const {
    return age;
}
