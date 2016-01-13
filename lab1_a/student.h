//
// Created by nick on 9/8/15.
//

#ifndef LAB1_STUDENT_H
#define LAB1_STUDENT_H

struct Student {
    char *name;
    char *speciality;
    int year;
    float averageMark;
};

void setValues(Student *student,char *name,char *speciality,int year,float averageMark);
void init(Student *student);
void destroy(Student *student);

int cmp(Student *a,Student *b);

#endif //LAB1_STUDENT_H
