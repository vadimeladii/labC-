//
// Created by vadimeladii on 25/10/15.
//

#include "Presa.h"
#include <string.h>

Presa::Presa(char *nomZiarul) {
    this->nomZiarul=new char[strlen(nomZiarul)+1];
    strcpy(this->nomZiarul,nomZiarul);
}

Presa::Presa(Presa &presa) {
    this->nomZiarul=presa.nomZiarul;
}

char *Presa::getNomZiarul() {
    return this->nomZiarul;
}

ostream &operator<<(ostream &ostream1, Presa &presa) {
    ostream1 << "Nom :";
    ostream1 << presa.getNomZiarul()<< endl;
    ostream1 << "-------------------------------------------";
    return ostream1;
}

istream &operator>>(istream &istream1, Presa &presa) {
    char *nomZiarul;
    cout << "Introduise le nom";
    cin >> presa.nomZiarul;
    return istream1;
}

Presa &Presa::operator=(Presa &presa) {
    this->nomZiarul=presa.nomZiarul;
    return *this;
}

Presa::Presa() {
    this->nomZiarul= nullptr;
}

void Presa::setNomZiarul(char *nomZiarul) {
    this->nomZiarul=nomZiarul;
}
