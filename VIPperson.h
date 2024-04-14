

#ifndef LAB5_VIPPERSON_H
#define LAB5_VIPPERSON_H
#include <iostream>
#include "person.h"
using namespace std;

class VIPCustomer : public Person {
public:

    VIPCustomer();
    ~VIPCustomer();
    //  cannot be overridden
    /*void Order1() override
    {
        cout << "VIP Customer's order" << std::endl;
    }*/
};

#endif //LAB5_VIPPERSON_H
