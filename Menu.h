

#ifndef LAB5_MENU_H
#define LAB5_MENU_H
#include <iostream>
#include <string>

class Menu {
public:
    Menu();
    virtual ~Menu();
    virtual void Special() = 0; // Pure virtual function
};

#endif //LAB5_MENU_H
