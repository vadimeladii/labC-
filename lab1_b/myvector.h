//
// Created by nick on 9/9/15.
//

#ifndef LAB1B_MYVECTOR_H
#define LAB1B_MYVECTOR_H

struct MyVector {
    int size;
    long *elements;
};

void init(MyVector *myVector);
void add(MyVector *myVector,long element);
void destroy(MyVector *myVector);
long get(MyVector *myVector,int pos);
void set(MyVector *myVector,int pos,int val);
long sum(MyVector *myVector);

#endif //LAB1B_MYVECTOR_H
