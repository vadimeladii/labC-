//
// Created by vadim on 11/19/15.
//

#include "Valori.h"

Valori::Valori(int valoare, int calitate) : _valoare(valoare), _calitate(calitate),Obiect("Valori","Valori ce pot avea calitate,pret") {

}

Valori::Valori() : _valoare(0), _calitate(0) , Obiect() {
}

void Valori::setValoare(int valoare) {
    _valoare = valoare;
}

void Valori::setCalitate(int calitate) {
    _calitate = calitate;
}

int Valori::getValoare() {
    return _valoare;
}

int Valori::getCalitate() {
    return _calitate;
}

void Valori::show() {
    cout << "Valoare :" << this->getValoare() << endl;
    cout << "Calitate :" << this->getCalitate() << endl;
}