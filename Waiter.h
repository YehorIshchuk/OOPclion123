
#ifndef LAB4_WAITER_H
#define LAB4_WAITER_H


#include "Staff.h"

class Waiter : public Staff {
private:
    int experienceYears;

public:
    Waiter(const string& name, int age, int experienceYears);
    ~Waiter();

    void display();
};




#endif //LAB4_WAITER_H
