

#ifndef LAB5_STAFF_H
#define LAB5_STAFF_H
#include <string>
#include <iostream>

class Staff {
public:
    std::string position;
    int salary;

    Staff();
    virtual ~Staff();

    virtual void Work();
    virtual void ShowInfo();
};



#endif //LAB5_STAFF_H
