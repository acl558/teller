//
// Created by kevin on 08/07/2021.
//

#include "Teller.h"

Teller::Teller() {
    Teller::status = 0.0;
}

Teller::Teller(int status) {
    if (status > 0){
        if (status <= MAX){
            Teller::status = status;
        }else{
            cout << "Max 10 Kuchen auf den Teller!" << endl;
        }
    }else{
        cout<<"INVALID NUMBER!" << endl;
    }

}

Teller::~Teller() {

}

void Teller::put() {
    if (status < MAX){
        Teller::status += 1;
        cout << "Putting 1 cake on the plate..." << endl;
    }else{
        cout << "Too many cake on the Plate!" << endl;
    }

}

void Teller::remove() {
    if (status > 0){
        Teller::status -= 1;
        cout << "Putting 1 cake on the plate..." << endl;
    }else{
        cout << "There aren't any cake on the plate!!" << endl;
    }
}

