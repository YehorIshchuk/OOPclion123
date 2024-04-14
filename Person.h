
#ifndef OOPCLINE_PERSON_H
#define OOPCLINE_PERSON_H
#include <iostream>
#include "Customer.h"

using namespace std;



class Person : public Customer {
public:

    int doubleprofit;

    Person &operator=(const Person&rhs){

        if (this !=&rhs){
            Customer::operator=(rhs);
            doubleprofit = rhs.doubleprofit;

        }
        return *this;
    }

    Person();
    ~Person();

    void Complain () {
        cout << "Why the food is already cold? " << endl;
    }
};


#endif //OOPCLINE_PERSON_H
