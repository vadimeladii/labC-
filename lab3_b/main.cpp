#include <iostream>
#include "Queuer.h"

using namespace std;

int main() {
    Queuer queuer1;
    Queuer queuer2;

    cin >> queuer1;
    cin >> queuer1;

    cout << queuer1;

    cin >> queuer2;
    cin >> queuer2;
    cin >> queuer2;

    cout << queuer2;

    if(queuer1==queuer2){
        cout << " queuer1 = queuer2 ";
    }
    if(queuer1!=queuer2){
        cout << " queuer1 !=queuer2 ";
    }
    if(queuer1>queuer2){
        cout << " queuer1 > queuer2 ";
    }
    if(queuer1<queuer2){
        cout << " queuer1 < queuer2 ";
    }
    cout << endl;

    queuer1+queuer2;

    cout << queuer1;

    return 0;
}