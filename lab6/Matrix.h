//
// Created by vadim on 11/19/15.
//

#ifndef LAB6_MATRIX_H
#define LAB6_MATRIX_H


#include "Number.h"

class Matrix : public Number {
private:
    double _data[2][2];
public:
    Matrix(int a,int b,int c,int d);
    Matrix();
    void setNumber(int x,int y,double val);
    double getNumber(int x,int y);
    double media();
};


#endif //LAB6_MATRIX_H
