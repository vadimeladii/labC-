//
// Created by vadimeladii on 25/10/15.
//

#include "Gazeta.h"

Gazeta::Gazeta(char* nomZiar,int tirajul):Presa(nomZiar) {
    this->tirajul=tirajul;
}

Gazeta::Gazeta(Gazeta &gazeta){
    this->tirajul=gazeta.tirajul;
    this->setNomZiarul(gazeta.getNomZiarul());
}

int Gazeta::getTirajul() {
    return this->tirajul;
}

ostream &operator<<(ostream &ostream1, Gazeta &gazeta) {
    ostream1 << "Nom :";
    ostream1 << gazeta.getNomZiarul()<< endl;
    ostream1 << "Tirajul :";
    ostream1 << gazeta.getTirajul()<< endl;
    ostream1 << "-----------------------------------------------------" << endl;
    return ostream1;
}

istream &operator>>(istream &istream1, Gazeta &gazeta) {
    int tirajul;
    char *nom = nullptr;
    cout << "Introduce tirajul nou :" << endl;
    cin >> tirajul;
    gazeta.setTirajul(tirajul);
    cout << "Introduce denumirea noua :" << endl;
    cin >> nom;
    gazeta.setNomZiarul(nom);
    return istream1;
}

Gazeta &Gazeta::operator=(Gazeta &gazeta) {
    this->tirajul=gazeta.tirajul;
    this->setNomZiarul(gazeta.getNomZiarul());
    return  *this;
}

void Gazeta::setTirajul(int tirajul) {
    this->tirajul=tirajul;
}
