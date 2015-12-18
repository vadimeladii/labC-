//
// Created by vadim on 11/19/15.
//

#ifndef LAB5_HIRTIE_H
#define LAB5_HIRTIE_H


#include <iostream>

using  namespace std;

class Hirtie {
private:
    int _marime;
    int _culoare;
public:
    Hirtie();
    Hirtie(int marime,int culoare);
    void setMarime(int marime);
    void setCuloare(int culoare);
    int getMarime();
    int getCuloare();
    void show();
};


#endif //LAB5_HIRTIE_H
