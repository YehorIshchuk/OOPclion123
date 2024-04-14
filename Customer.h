

#ifndef LAB5_CUSTOMER_H
#define LAB5_CUSTOMER_H
#include <iostream>
using namespace std;

class Customer {
public:
    Customer();
    virtual ~Customer();
    virtual void Order();
};

#endif //LAB5_CUSTOMER_H
