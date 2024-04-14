

#ifndef LAB5_PERSON_H
#define LAB5_PERSON_H
#include "Customer.h"
#include <string>

class Person : public Customer {
public:
    Person();
    ~Person();
    void Order() override;
    void Order1();
private:
    int phonenumber;
    std::string person;
};
#endif //LAB5_PERSON_H
