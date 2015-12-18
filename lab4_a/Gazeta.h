//
// Created by vadimeladii on 25/10/15.
//

#ifndef LAB4_A_GAZETA_H
#define LAB4_A_GAZETA_H

#include <iostream>
#include "Presa.h"

using namespace std;

class Gazeta : public Presa {
private:
    int tirajul;
public:
    Gazeta() { }

    Gazeta(char *nomZiar, int tirajul);
    Gazeta(Gazeta &);

    int  getTirajul();
    void setTirajul(int tirajul);

    friend ostream& operator<<(ostream &ostream1, Gazeta &gazeta);
    friend istream& operator>>(istream &istream1,Gazeta& gazeta);

    Gazeta &operator = (Gazeta &gazeta);
};


#endif //LAB4_A_GAZETA_H
