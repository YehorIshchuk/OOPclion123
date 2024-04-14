
#ifndef OOPCLINE_CUSTOMER_H
#define OOPCLINE_CUSTOMER_H
#include <iostream>
#include<string>
using namespace std;
class Customer {
public:
    int numberoforders;
    int profit;
    string person;
    string name;
    Customer &operator=(const Customer &rhs){
        if (this != &rhs){
            profit = rhs.profit;
        }
        return *this;
    }

    Customer();

    ~Customer();

    void Order() {
        cout << "Number of Orders: " << numberoforders << endl;
        cout << "I would like to take my order! " <<  endl;
    }
};

#endif //OOPCLINE_CUSTOMER_H
