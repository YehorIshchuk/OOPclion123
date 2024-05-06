
#ifndef LAB4_STAFF_H
#define LAB4_STAFF_H



#include <iostream>
#include <string>

using namespace std;

class Staff {
protected:
    string name;
    int age;
    string designation;

public:
    Staff(const string& name, int age, const string& designation);
    virtual ~Staff();

    void display();
};


#endif //LAB4_STAFF_H
