//
// Created by vadim on 11/19/15.
//

#ifndef LAB5_VALORI_H
#define LAB5_VALORI_H

#include <iostream>
#include "Obiect.h"

using namespace std;

class Valori : public virtual Obiect {
private:
    int _valoare;
    int _calitate;

public:
    Valori(int valoare, int calitate);
    Valori();
    void setValoare(int valoare);
    void setCalitate(int calitate);
    int getValoare();
    int getCalitate();
    void show();
};


#endif //LAB5_VALORI_H
