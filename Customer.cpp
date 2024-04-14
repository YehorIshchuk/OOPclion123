#include <iostream>
#include "Customer.h"

using namespace std;


Customer :: Customer() : numberoforders(5), profit(1079){
    cout << "Customer constructor was called " << endl;

}

Customer :: ~Customer() {
    cout << "Customer destructor was called " << endl;
};

