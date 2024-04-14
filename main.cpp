#include <iostream>
#include <string>
#include "Staff.h"
#include "Waiter.h"
#include "Customer.h"
#include "Person.h"
#include "Menu.h"
#include "Drinks.h"


using namespace std;




int main() {
    Staff a;
    a.PrintSalary();

    Waiter a2;
    a2.Print();

    Person MyPerson;
    MyPerson.name = "Oleksandr Petrenko";

    MyPerson.Order();
    MyPerson.Complain();

    Menu c;
    c.Print();

    Drinks c1;
    c1.Print();


    return 0;
}
