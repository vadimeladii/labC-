//
// Created by vadim on 11/19/15.
//

#include "Matrix.h"

Matrix::Matrix(int a, int b, int c, int d) {
    _data[0][0] = a;
    _data[0][1] = b;
    _data[1][0] = c;
    _data[1][1] = d;
}

Matrix::Matrix() {
    _data[0][0] = _data[0][1] = _data[1][0] = _data[1][1] = 0;
}

void Matrix::setNumber(int x, int y, double val) {
    _data[x][y] = val;
}

double Matrix::getNumber(int x, int y) {
    return _data[x][y];
}

double Matrix::media() {
    return (_data[0][0] + _data[0][1] + _data[1][0] + _data[1][1]) / 4;
}
