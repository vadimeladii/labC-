//
// Created by vadimeladii on 15/10/15.
//

#include "Computer.h"

Computer::Computer(Procesor *procesor, int pretul,char* marca) {
    this->procesor=procesor;
    this->pretul=pretul;
    this->marca=marca;
}

void Computer::setPretul(int pretul) {
    this->pretul=pretul;
}


int Computer::getPretul() {
    return this->pretul;
}

ostream &operator<<(ostream &ostream1, Computer &computer) {
    ostream1 << "Calculatorul : " << computer.getMarca() << endl;
    ostream1 << "Pretul : " << computer.getPretul() << endl;
    ostream1 << "Procesor : " << computer.getProcesor().getName() << endl;
    ostream1 << "Fregventa : " << computer.getProcesor().getFregventa() << endl;
    ostream1 << "Marimea Memoriei : " << computer.getProcesor().getMarimeaMemoriei() << endl;
    ostream1 << "Tehnologii Folosite : " << computer.getProcesor().getTehnologiiFolosite() << endl;
    ostream1 << " ---------------------------------------------------------------------------------- " << endl;
    return ostream1;
}

Procesor &Computer::getProcesor() {
    return *procesor;
}

void Computer::setMarca(char *marca) {
    this->marca=marca;
}

char *Computer::getMarca() {
    return this->marca;
}
