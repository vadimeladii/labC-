#include <iostream>
#include "Complex.h"
#include "Vector.h"
#include "Matrix.h"

using namespace std;

int main() {
    int size = 4;
    Number **numbers = new Number*[size];


    numbers[0] = new Complex(3,4);
    numbers[1] = new Complex(1,2);
    numbers[2] = new Matrix(1,2,3,4);
    numbers[3] = new Vector(4,4,5,5,5);

    for (int i = 0; i < size; ++i) {
        cout << numbers[i]->media() << endl;
    }

    for (int j = 0; j < size; ++j) {
        delete numbers[j];
    }

    delete[] numbers;

    return 0;
}