#include <iostream>
#include "ZiarElectronic.h"
#include "Gazeta.h"

using namespace std;

int main() {

    ZiarElectronic ziarElectronic((char *) "Jurnal",200,22456,7);
    cout << ziarElectronic << endl;
    ziarElectronic.setNomZiarul((char *) "Publica");
    cout << ziarElectronic;
    ZiarElectronic ziarElectronic1((char *) "Privesc.eu",100,500,8);
    ziarElectronic=ziarElectronic1;
    cout << ziarElectronic;

    cout << "=====================================================" << endl;

    Gazeta gazeta((char *) "Jurnal",200);
    cout << gazeta;
    gazeta.setNomZiarul((char *) "Vadim");
    gazeta.setTirajul(20000);
    gazeta=ziarElectronic;
    cout << gazeta;

    cout << "=====================================================" << endl;

    Presa presa((char *) "Jurnal.md");
    cout << presa << endl;
    presa = gazeta;
    cout << presa <<endl;

    cout << "=====================================================" << endl;

    return 0;
}