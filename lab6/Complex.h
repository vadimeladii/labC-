//
// Created by vadim on 11/19/15.
//

#ifndef LAB6_COMPLEX_H
#define LAB6_COMPLEX_H


#include "Number.h"
#include <cmath>

class Complex : public Number {
private:
    double _real;
    double _imaginary;
public:
    Complex();
    Complex(double real,double imaginary);
    double media();
    void setReal(double real);
    void setImaginary(double imaginary);
    double getReal();
    double getImaginary();
};


#endif //LAB6_COMPLEX_H
