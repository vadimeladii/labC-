//
// Created by nick on 9/8/15.
//

#include <string.h>
#include "student.h"

void init(Student *student){
    student->name = NULL;
    student->speciality = NULL;
}


void setValues(Student *student, char *name, char *speciality, int year, float averageMark) {
    //setting name
    if(student->name)
        delete[] student->name;
    student->name = new char[strlen(name)+1];
    strcpy(student->name,name);

    //setting speciality
    if(student->speciality)
        delete[] student->speciality;
    student->speciality = new char[strlen(speciality)+1];
    strcpy(student->speciality,speciality);

    //setting year
    student->year = year;

    //setting averageMark
    student->averageMark = averageMark;
    
}

void destroy(Student *student){
    delete[] student->name;
    delete[] student->speciality;
}

int cmp(Student *a,Student *b){
    int cmp = strcmp(a->speciality,b->speciality);
    if(cmp == 0)
        cmp = b->averageMark - a->averageMark;

    return cmp;
}

