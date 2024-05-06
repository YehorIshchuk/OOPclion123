

#ifndef LAB4_CREDITCARD_H
#define LAB4_CREDITCARD_H

#include "Customer.h"

class CreditCard {
private:
    Customer customer;
    long cardNumber;

public:
    CreditCard(const string& n, int a, long cn);
    ~CreditCard();

    Customer getCustomer() const;
    long getCardNumber() const;
};



#endif //LAB4_CREDITCARD_H
