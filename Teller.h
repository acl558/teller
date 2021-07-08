//
// Created by kevin on 08/07/2021.
//

#ifndef TELLER_TELLER_H
#define TELLER_TELLER_H

#include <iostream>
using namespace std;

#define MAX 10

class Teller {

public:
    Teller();
    Teller(int status);
    ~Teller();

    void put();
    void remove();

private:
    int status;


};


#endif //TELLER_TELLER_H
