#include <iostream>
#include "Menu.h"
using namespace std;


Menu :: Menu() : price(550) {
    cout << "Menu constructor was called" << endl;
}

Menu :: ~Menu() {
    cout << "Menu destructor was called" << endl;
}
