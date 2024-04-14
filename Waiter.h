

#ifndef LAB5_WAITER_H
#define LAB5_WAITER_H
#include <iostream>
#include"Staff.h"

class Waiter : public Staff {
public:
    std::string name;

    Waiter();
    ~Waiter();

    void Serve() const;

    void Work() override;
    void ShowInfo() override;
};

#endif //LAB5_WAITER_H
