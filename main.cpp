#include <iostream>
#include <string>
#include"Staff.h"
#include"Waiter.h"
#include"Customer.h"
#include"Person.h"
#include"Menu.h"
#include"Deserts.h"
#include"Vehicle.h"
#include"Car.h"
#include"Bus.h"
using namespace std;

int main() {

    Waiter MyWaiter;
    Staff* ptr = &MyWaiter;
    ptr->ShowInfo();
    MyWaiter.Serve();

    Person MyOrder;
    Customer* ptr1 = &MyOrder;
    ptr1->Order();    //Run time polymorphism


    Menu* ptr2 = new Deserts();
    ptr2->Special(); // Calls the overridden Special() function

    Car car;
    car.drive();
                  //the interface was made through the pure virtual function
    Bus bus;
    bus.drive();



    return 0;




}

