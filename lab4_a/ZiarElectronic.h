//
// Created by vadimeladii on 25/10/15.
//

#ifndef LAB4_A_ZIARELECTRONIC_H
#define LAB4_A_ZIARELECTRONIC_H

#include <iostream>
#include "Gazeta.h"

using namespace std;

class ZiarElectronic : public Gazeta{
private:
    int  nombreAbonament;
    int   periodicitatea;
public:

    ZiarElectronic(char *nomZiarului, int tirajul, int nombreAbonament, int periodicitatea);
    ZiarElectronic(ZiarElectronic &);

    int  getNombreAbonament();
    int  getPeriodicitatea();

    void setNombreAbonament(int nombreAbonament);
    void setPeriodicitatea(int periodicitatea);

    friend ostream& operator<<(ostream &ostream1, ZiarElectronic &ziarElectronic);
    friend istream& operator>>(istream &istream1,ZiarElectronic& ziarElectronic);

    ZiarElectronic &operator = (ZiarElectronic &ziarElectronic);

};


#endif //LAB4_A_ZIARELECTRONIC_H
