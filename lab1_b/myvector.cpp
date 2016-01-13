//
// Created by nick on 9/9/15.
//

#include <malloc.h>
#include "myvector.h"

void init(MyVector *myVector) {
    myVector->elements = (long*)malloc(sizeof(long));
    myVector->size = 0;
}

void add(MyVector *myVector, long element) {
    myVector->elements = (long*)realloc(myVector->elements,++myVector->size + sizeof(long));
    myVector->elements[myVector->size-1] = element;
}

void destroy(MyVector *myVector) {
    free(myVector->elements);
    myVector->size = 0;
}

long get(MyVector *myVector,int pos) {
    if(pos < myVector->size && pos >= 0)
        return myVector->elements[pos];
    return 0;
}

void set(MyVector *myVector, int pos, int val) {
    if(pos < myVector->size  && pos >= 0)
        myVector->elements[pos] = val;
}

long sum(MyVector *myVector) {
    int s = 0;
    for (int i = 0; i < myVector->size; ++i)
        if(i % 2 != 0)
            s += myVector->elements[i];
    return s;
}
