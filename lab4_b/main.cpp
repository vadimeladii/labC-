#include <iostream>
#include "Computer.h"

using namespace std;

int main() {
    Computer *computer;
    Procesor *procesor;

    procesor=new Procesor((char *) "34545qt",2323, (char *) "c++",12000);
    computer=new Computer(procesor,10000,(char *) "hp2432 i7");

    cout << *computer;

    computer->setMarca((char *) "dell2334");
    procesor->setFregventa(20000);

    cout << *computer;

    return 0;
}