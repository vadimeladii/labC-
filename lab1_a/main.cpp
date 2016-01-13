#include <iostream>
#include "stdlib.h"
#include "student.h"


using namespace std;

int main() {
    Student **students;
    students = (Student**)malloc(sizeof(Student*));
    int studentsNr = 0;
    int opt = 1;
    while(opt){
        cout << endl << "Menu : " << endl;
        cout << "1. Add element" << endl;
        cout << "2. Show" << endl;
        cout << "3. Sort" << endl;
        cout << "Choose option from menu : ";
        cin >> opt;
        switch (opt) {
            case 1:
                char name[255];
                char speciality[255];
                int year;
                float average;
                cout << "Enter name : ";
                cin >> name;
                cout << "Enter speciality : ";
                cin >> speciality;
                cout << "Enter year : ";
                cin >> year;
                cout << "Enter average mark: ";
                cin >> average;
                students = (Student**)realloc(students,(++studentsNr) * sizeof(Student*));
                students[studentsNr-1] = (Student*)malloc(sizeof(Student));
                init(students[studentsNr-1]);
                setValues(students[studentsNr-1],name,speciality,year,average);
                break;
            case 2:
                cout << "Students are : " << endl;
                for (int i = 0; i < studentsNr; ++i) {
                    cout << "Name : " << students[i]->name << endl;
                    cout << "Speciality : " << students[i]->speciality << endl;
                    cout << "Year : " << students[i]->year << endl;
                    cout << "Average mark : " << students[i]->averageMark << endl;
                    cout << "-----------------------------------------------------" << endl;
                }
                break;
            case 3 :
                for (int j = 0; j < studentsNr-1; ++j)
                    for (int i = j+1; i < studentsNr; ++i)
                        if(cmp(students[i],students[j]) < 0){
                            Student *temp = students[i];
                            students[i] = students[j];
                            students[j] = temp;
                        }
                cout << "Students were sorted successfully" << endl;
                break;
        }
    }
    for (int j = 0; j < studentsNr; ++j){
        destroy(students[j]);
        free(students[j]);
    }

    free(students);
    return 0;
}