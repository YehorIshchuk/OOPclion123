#include "Cook.h"

Cook::Cook(const string& name, int age, const string& speciality)
        : Staff(name, age, "Cook"), speciality(speciality) {}

Cook::~Cook() {}

void Cook::display() {
    Staff::display();
    cout << "Speciality: " << speciality << endl;
}
