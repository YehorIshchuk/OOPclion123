#include "Waiter.h"

Waiter::Waiter(const string& name, int age, int experienceYears)
        : Staff(name, age, "Waiter"), experienceYears(experienceYears) {}

Waiter::~Waiter() {}

void Waiter::display() {
    Staff::display();
    cout << "Experience (years): " << experienceYears << endl;
}
