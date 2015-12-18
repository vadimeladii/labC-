//
// Created by vadim on 19/11/15.
//

#include <iostream>
#include "Vector.h"

double Vector::media() {
    double suma=0;
    for(int i(0);i<this->d;i++){
        suma+=arrayNombre[i];
    }
    return suma/d;
}

Vector::Vector(int d, ...) {
    this->d=d;
    va_list vaList;
    va_start(vaList,d);
    for(int i(0);i<d;i++){
        this->arrayNombre[i]=va_arg(vaList, int );
    }
    va_end(vaList);
}
