#include<iostream>
#include"Waiter.h"
using namespace std;




Waiter :: Waiter() : Staff(), priceofdelivery(75),freecars(3), dish("Pasta"){
    cout << "Waiter constructor was called " << endl;
}

Waiter :: Waiter(const Waiter& other) : Staff(other), doublesalary{other.doublesalary} {
    cout << "Waiter copy constructor was called" << endl;
}

Waiter :: ~Waiter() {
    cout << "Waiter destructor was called" << endl;
}
