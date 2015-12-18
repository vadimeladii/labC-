//
// Created by vadim on 11/19/15.
//

#include "Obiect.h"

Obiect::Obiect() : _nume(""),_descriere(""){

}

Obiect::Obiect(string nume, string descriere) : _nume(nume),_descriere(descriere) {

}

void Obiect::setNume(string nume) {
    _nume = nume;
}

void Obiect::setDescriere(string descriere) {
    _descriere = descriere;
}

string Obiect::getNume() {
    return _nume;
}

string Obiect::getDescriere() {
    return _descriere;
}

void Obiect::showObiectInfo() {
    cout << "Nume : " << this->getNume() << endl;
    cout << "Descriere : " << this->getDescriere() << endl;
}
