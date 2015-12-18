//
// Created by vadim on 11/19/15.
//

#include "Hirtie.h"

Hirtie::Hirtie() : _marime(0),_culoare(0){

}

Hirtie::Hirtie(int marime, int culoare) : _marime(marime),_culoare(culoare), Obiect("Hirtie","Act,document,titlu") {

}

void Hirtie::setMarime(int marime) {
    _marime = marime;
}

void Hirtie::setCuloare(int culoare) {
    _culoare = culoare;
}

int Hirtie::getMarime() {
    return _marime;
}

int Hirtie::getCuloare() {
    return _culoare;
}

void Hirtie::show() {
    cout << "Marimea : " << this->getMarime() << endl;
    cout << "Culoarea : " << this->getCuloare() << endl;
}