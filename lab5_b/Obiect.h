//
// Created by vadim on 11/19/15.
//

#ifndef LAB5_OBIECT_H
#define LAB5_OBIECT_H

#include <iostream>

using namespace std;

class Obiect {
private:
    string _nume;
    string _descriere;

public:
    Obiect();
    Obiect(string nume,string descriere);
    void setNume(string nume);
    void setDescriere(string descriere);
    string getNume();
    string getDescriere();
    void showObiectInfo();
};


#endif //LAB5_OBIECT_H
