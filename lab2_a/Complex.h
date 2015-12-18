//
// Created by vadimeladii on 06/10/15.
//

#ifndef LAB2_A_COMPLEX_H
#define LAB2_A_COMPLEX_H

#include <iostream>
#include <math.h>

using namespace std;

class Complex {
private:
    float x;
    float y;
public:
    Complex();
    Complex(float x,float y);
    void changeComplex();
    void affichageComplex();
    float modulComplex();
    float argumentComplex();
    void inversComplex();
    float getReele();
    float getImaginaire();
    Complex& operator+=(Complex* complex);
};


#endif //LAB2_A_COMPLEX_H
