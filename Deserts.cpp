#include "Deserts.h"
#include <iostream>
using namespace std;

Deserts::Deserts() {}

Deserts::~Deserts() {
    cout << "Deserts destructor was called" << std::endl;
}

void Deserts::Special() {
    cout << "Special desert: " << desert << std::endl;
}
