#include <iostream>
#include "Person.h"
using namespace std;





Person :: Person() : Customer() {
    cout << "Person constructor was called" << endl;
}
Person :: ~Person() {
    cout << "Person destructor was called" << endl;
}



