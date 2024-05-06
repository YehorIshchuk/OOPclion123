

#ifndef LAB4_COOK_H
#define LAB4_COOK_H
#include "Staff.h"

class Cook : public Staff {
private:
    string speciality;

public:
    Cook(const string& name, int age, const string& speciality);
    ~Cook();

    void display();
};


#endif //LAB4_COOK_H
