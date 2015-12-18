//
// Created by vadimeladii on 06/10/15.
//

#include "Complex.h"

Complex::Complex()
{
    cout << "Introduisez la partie reele du z : ";
    cin >>this->x;
    cout << "Introduisez la imaginaire reele du z : ";
    cin >> this->y;
}

Complex::Complex(float x, float y) {
    this->x=x;
    this->y=y;
}

void Complex::changeComplex()
{
    cout << "Introduisez la partie reele du z :";
    cin >> this->x;
    cout<< "Introduisez la partie imaginaire du z :";
    cin >> this->y;
}

void Complex::affichageComplex()
{
    cout << "Le nombre complexe est:\nz=" <<  getReele() <<"+"<< getImaginaire() <<"i"<< endl;
    cout << "La partie reele du z:\nRe(z)=" << this->x<<endl;
    cout << "La partie imaginaire du z:\nIm(z)=" << this->y<<endl<<endl;
}

float Complex::modulComplex()
{
    return (float) sqrt((this->x*this->x) + (this->y*this->y));
}

float Complex::argumentComplex()
{
    return (float) atan2(y,this->x);
}

void Complex::inversComplex()
{
    float a, b;
    a = this->x / (this->x*this->x + this->y*this->y);
    b = (-y) / (this->x*this->x + this->y*this->y);
    cout << "L'inverse du nombre est:\n 1/z="<<a<<b<<"i" <<endl ;
}


Complex &Complex::operator+=(Complex *complex) {
    this->x+=complex->x;
    this->y+=complex->y;
    return *this;
}

float Complex::getReele() {
    return this->x;
}

float Complex::getImaginaire() {
    return this->y;
}
