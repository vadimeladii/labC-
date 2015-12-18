//
// Created by vadimeladii on 06/10/15.
//

#ifndef LAB2_B_OBJET_H
#define LAB2_B_OBJET_H

#include<iostream>
using namespace std;
class Objet {

private:
    string identificateur;
    int taille;
    static int nombreObjet;
public:
    Objet(string, int);
    void imprimer();
    int size();
    string getIdentificateur();
    int getTaille();
    void setIndentificateru(string identificateurs);
    void setTaille(int taille);


};


#endif //LAB2_B_OBJET_H
