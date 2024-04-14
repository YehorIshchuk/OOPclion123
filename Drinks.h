

#ifndef OOPCLINE_DRINKS_H
#define OOPCLINE_DRINKS_H
#include <iostream>
#include "Menu.h"
using namespace std;




class Drinks : public Menu {
public:
    string drink;

    Drinks();
    ~Drinks();

    void Print() {
        cout << "Drink: " << drink << endl;
    }
};
#endif //OOPCLINE_DRINKS_H
