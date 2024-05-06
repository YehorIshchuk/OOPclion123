

#ifndef LAB4_CUSTOMER_H
#define LAB4_CUSTOMER_H

#include <string>

using namespace std;

class Customer {
private:
    string name;
    int age;

public:
    Customer(const string& n, int a);
    ~Customer();

    string getName() const;
    int getAge() const;
};



#endif //LAB4_CUSTOMER_H
