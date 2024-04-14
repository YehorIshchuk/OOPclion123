

#ifndef OOPCLINE_STAFF_H
#define OOPCLINE_STAFF_H
#include <iostream>
#include <string>
#include "Salary.h"
using namespace std;



class Staff {
public:
    int freecars;
    int priceofdelivery;
    int salary;
    int tips;
    string dish;

private:
    Salary staffSalary;

public:

    Staff(const Staff& other);


    Staff();


    ~Staff();

        void PrintSalary();
        void Print() {
        cout << "Price of Delivery: " << priceofdelivery << endl;
        cout << "Free Cars: " << freecars << endl;
    }

    };
#endif //OOPCLINE_STAFF_H

