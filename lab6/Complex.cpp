//
// Created by vadim on 11/19/15.
//

#include "Complex.h"

Complex::Complex() : _real(0),_imaginary(0) {

}

Complex::Complex(double real, double imaginary) : _real(real),_imaginary(imaginary) {

}

double Complex::media() {
    return sqrt(pow(_real,2) + pow(_imaginary,2));
}

void Complex::setReal(double real) {
    _real = real;
}

void Complex::setImaginary(double imaginary) {
    _imaginary = imaginary;
}

double Complex::getReal() {
    return _real;
}

double Complex::getImaginary() {
    return _imaginary;
}
