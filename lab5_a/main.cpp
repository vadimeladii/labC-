#include <iostream>
#include "Actiuni.h"

using namespace std;

int main() {

    Actiuni *actiuni=new Actiuni(10,45,43,54,"Vadim","eladiiVadim");
    actiuni->show();


    return 0;
}