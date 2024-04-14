

#ifndef OOPCLINE_WAITER_H
#define OOPCLINE_WAITER_H
#include<iostream>
#include<string>
#include "Staff.h"
using namespace std;


class Waiter : public Staff {
private:
    int doublesalary;
    int priceofdelivery;
    int freecars;
    string dish;
public:

    Waiter(const Waiter& other) ;


    Waiter();

    ~Waiter();

    void Print() {
        cout << "Price of delivery: " << priceofdelivery << endl;
        cout << "Free cars: " << freecars << endl;
        cout << "Name of dish: " << dish << endl;
    }
};
#endif //OOPCLINE_WAITER_H
