//
// Created by vadim on 19/11/15.
//

#ifndef LAB6_VECTOR_H
#define LAB6_VECTOR_H


#include "Number.h"
#include <stdarg.h>

class Vector : public Number {
private:
    int  arrayNombre[10];
    int d;
public:
    Vector(int d, ...);
    virtual double media() override;
};


#endif //LAB6_VECTOR_H
