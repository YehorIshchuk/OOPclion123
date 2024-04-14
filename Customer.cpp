#include "Customer.h"
#include<iostream>
using namespace std;

Customer::Customer() {}

Customer::~Customer() {
   cout << "Customer destructor was called" << std::endl;
}

void Customer::Order() {
    cout <<"What would you like to order:" << std::endl;
}
