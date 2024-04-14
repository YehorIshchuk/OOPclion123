
#ifndef OOPCLINE_MENU_H
#define OOPCLINE_MENU_H
#include <iostream>
using namespace std;


class Menu {
public:
    int price;

    Menu();

    ~Menu();

    void Print() {
        cout << "Price: " << price << endl;;
    }
};
#endif //OOPCLINE_MENU_H
