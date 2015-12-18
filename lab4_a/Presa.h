//
// Created by vadimeladii on 25/10/15.
//

#ifndef LAB4_A_PRESA_H
#define LAB4_A_PRESA_H

#include <iostream>

using namespace std;

class Presa {
private:
    char *nomZiarul;
public:
    Presa();
    Presa(char *nomZiarul);
    Presa(Presa &);

    char* getNomZiarul();
    void setNomZiarul(char *nomZiarul);

    friend ostream& operator<<(ostream &ostream1, Presa &presa);
    friend istream& operator>>(istream &istream1,Presa& presa);

    Presa &operator = (Presa &presa);
};


#endif //LAB4_A_PRESA_H
