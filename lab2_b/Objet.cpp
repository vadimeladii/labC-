//
// Created by vadimeladii on 06/10/15.
//

#include "Objet.h"

int Objet::nombreObjet=0;
Objet::Objet(string identificateur, int taille) {
    this->identificateur = identificateur;
    this->taille = taille;
   this->nombreObjet++;

}


void Objet::imprimer() {
        cout << "Identificateur : "<<this->identificateur<<endl;
        cout << "Taille : "<<this->taille <<endl;
    cout << "---------------------------------" << endl;
}

int Objet::size() {
   return this->nombreObjet;
}


string Objet::getIdentificateur() {
    return this->identificateur;
}

int Objet::getTaille() {
    return this->taille;
}

void Objet::setIndentificateru(string identificateurs) {
    this->identificateur=identificateurs;

}

void Objet::setTaille(int taille) {
    this->taille=taille;
}
