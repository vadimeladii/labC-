#include <iostream>
#include "Actiuni.h"

using namespace std;

int main() {

    Actiuni *actiuni=new Actiuni(10,45,43,54,"vadim","vadimeladii","Actiune NASDAQ","NASDAQ este o bursă electronică din Statele Unite ale Americii");
    actiuni->showObiect();
    actiuni->show();

    cout << "------------------------------------------"<< endl;


    Hirtie *hirtie=new Hirtie(10,40);
    hirtie->showObiectInfo();
    hirtie->show();
    cout << "------------------------------------------"<< endl;

    Valori *valori=new Valori(1000,10);
    valori->showObiectInfo();
    valori->show();

    return 0;
}