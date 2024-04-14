#include <iostream>
#include "Drinks.h"
using namespace std;


Drinks :: Drinks() : Menu() , drink("Juice , Coke , Beer  , Tea , Coffee") {
    cout << "Drinks constructor was called " << endl;
}
Drinks ::  ~Drinks() {
    cout << "Drink destructor was called" << endl;
}