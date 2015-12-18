//
// Created by vadimeladii on 15/10/15.
//

#ifndef LAB4_B_COMPUTER_H
#define LAB4_B_COMPUTER_H


#include "Procesor.h"
#include "iostream"

using namespace std;

class Computer {
private:
    Procesor *procesor;
    int pretul;
    char *marca;

public:
    Computer(Procesor *procesor,int pretul,char* marca);
    void  setPretul(int pretul);
    void setMarca(char* marca);
    int  getPretul();
    char *getMarca();
    Procesor& getProcesor();
    friend ostream& operator<<(ostream &ostream1, Computer &computer);

};


#endif //LAB4_B_COMPUTER_H
