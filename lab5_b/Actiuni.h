//
// Created by vadim on 11/19/15.
//

#ifndef LAB5_ACTIUNI_H
#define LAB5_ACTIUNI_H


#include "Hirtie.h"
#include "Valori.h"
#include <iostream>

using namespace std;

class Actiuni : protected Hirtie, protected Valori {
private :
    string _semnatura;
    string _proprietar;
public:
    Actiuni();
    Actiuni(int marime, int culoare, int valoare, int calitate, string proprietar, string semnatura,string nume,string descriere);
    void setSemnatura(string semnatura);
    void setProprietar(string proprietar);
    string getProprietar();
    string getSignature();
    void show();
    void showObiect();
};


#endif //LAB5_ACTIUNI_H
