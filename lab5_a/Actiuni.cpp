//
// Created by vadim on 11/19/15.
//

#include "Actiuni.h"

Actiuni::Actiuni(int marime, int culoare, int valoare, int calitate, string proprietar, string semnatura): Hirtie(marime, culoare),
                                                                                                           Valori(valoare,calitate) {
    this->_proprietar = proprietar;
    this->_semnatura = semnatura;
}

void Actiuni::show() {
    cout << "Owner :" << this->getProprietar() << endl ;
    cout << "Signature :" << this->getSignature() << endl;
    Hirtie::show();
    Valori::show();
    cout << "------------------------------------------"<< endl;
}

void Actiuni::setSemnatura(string semnatura) {
    this->_semnatura = semnatura;
}

string Actiuni::getSignature() {
    return this->_semnatura;
}

void Actiuni::setProprietar(string proprietar) {
    this->_proprietar = proprietar;
}

string Actiuni::getProprietar() {
    return this->_proprietar;
}

Actiuni::Actiuni() : Hirtie() , Valori() , _proprietar("") , _semnatura(""){

}
