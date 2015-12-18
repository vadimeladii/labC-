//
// Created by vadimeladii on 25/10/15.
//

#include <string.h>
#include "ZiarElectronic.h"

ZiarElectronic::ZiarElectronic(char *nomZiarului ,int tirajul,int nombreAbonament, int periodicitatea):Gazeta(nomZiarului,tirajul) {
    this->nombreAbonament=nombreAbonament;
    this->periodicitatea=periodicitatea;
}

ostream &operator<<(ostream &ostream1, ZiarElectronic &ziarElectronic) {
    ostream1 << "Nom :";
    ostream1 << ziarElectronic.getNomZiarul()<< endl;
    ostream1 << "Tirajul :";
    ostream1 << ziarElectronic.getTirajul()<< endl;
    ostream1 << "Nombre Abonament :";
    ostream1 << ziarElectronic.getNombreAbonament()<< endl;
    ostream1 << "Periodicitatea :";
    ostream1 << ziarElectronic.getPeriodicitatea()<< endl;
    ostream1 << "-----------------------------------------------------" << endl;
    return ostream1;
}

istream &operator>>(istream &istream1, ZiarElectronic &ziarElectronic) {
    int tirajul;
    char *nomZiarului = nullptr;
    cout << "Introduce un alt nume :"<< endl ;
    istream1 >> nomZiarului;
    ziarElectronic.setNomZiarul(nomZiarului);
    cout << "Introduce un alt tiraj :" << endl;
    istream1 >> tirajul;
    ziarElectronic.setTirajul(tirajul);
    cout  << "Introduce o alta periodicitate :"<< endl;
    istream1 >> ziarElectronic.periodicitatea;
    cout << "Introduni periosa a bonamentului :" << endl;
    istream1 >> ziarElectronic.nombreAbonament;
    return istream1;
}

ZiarElectronic& ZiarElectronic::operator=(ZiarElectronic &ziarElectronic1) {
    this->nombreAbonament=ziarElectronic1.nombreAbonament;
    this->periodicitatea=ziarElectronic1.periodicitatea;
    this->setNomZiarul(ziarElectronic1.getNomZiarul());
    this->setTirajul(ziarElectronic1.getTirajul());
    return *this;
}

ZiarElectronic::ZiarElectronic(ZiarElectronic &ziarElectronic) {
    this->nombreAbonament=ziarElectronic.nombreAbonament;
    this->periodicitatea=ziarElectronic.nombreAbonament;
    this->setNomZiarul(ziarElectronic.getNomZiarul());
    this->setTirajul(ziarElectronic.getTirajul());
}

int ZiarElectronic::getNombreAbonament() {
    return this->nombreAbonament;
}

int ZiarElectronic::getPeriodicitatea() {
    return this->periodicitatea;
}

void ZiarElectronic::setNombreAbonament(int nombreAbonament) {
    this->nombreAbonament=nombreAbonament;
}

void ZiarElectronic::setPeriodicitatea(int periodicitatea) {
    this->periodicitatea=periodicitatea;
}
