

#ifndef LAB5_DESERTS_H
#define LAB5_DESERTS_H
#include "Menu.h"
#include <string>
#include<string>
using namespace std;

class Deserts : public Menu {
public:
    string desert;

    Deserts();
    ~Deserts();

    void Special() override;
};

#endif //LAB5_DESERTS_H
