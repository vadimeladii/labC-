#include <iostream>
#include"Objet.h"
#include "vector"

using namespace std;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wloop-analysis"



int main()
{
    int choix;
    int  cond=0;
    string identificateurs;
    int taille;
    int id;
    int nomObjet =0;
    int j = 0;
    Objet* objet[10];

    do{
        cout << "\t=======================================" << endl;
        cout << "\tI                 MENU                I" << endl;
        cout << "\t=======================================" << endl;
        cout << "\tI  1.Creation d'un objet              I" << endl;
        cout << "\t---------------------------------------" << endl;
        cout << "\tI  2.Detruction d'un objet            I" << endl;
        cout << "\t---------------------------------------" << endl;
        cout << "\tI  3.Affichage de la liste des obets  I" << endl;
        cout << "\t---------------------------------------" << endl;
        cout << "\tI  0.Quitter                          I" << endl;
        cout << "\t---------------------------------------" << endl;
        cout << "\t Choisissez l'option: ";

        cin >> choix;

        switch (choix)
        {
            case 1:
                cout << "Introduisez indentificateur:"<< endl;
                cin >> identificateurs;
                cout  << "Introduisez taille";
                cin >> taille;

                objet[nomObjet]=new Objet(identificateurs,taille);

                nomObjet++;
                break;
            case 2:
                cout << "Introduisez indentificateur que vous voulez :" << endl;
                cin >> identificateurs;

                for (j; j < nomObjet; j++) {
                    if (identificateurs == objet[j]->getIdentificateur()) {
                      //  cout << "delete" << endl;
                        id=j;
                        cond = 1;
                    }
                }
                j=0;
                if (cond==1) {
                    cout << cond;

                  for( ;id < nomObjet - 1 ; id++) {
                       // cout << "mutare" << j << endl;
                        objet[id]->setIndentificateru(objet[id + 1]->getIdentificateur());
                        objet[id]->setTaille(objet[id + 1]->getTaille());
                    }
                     delete objet[nomObjet-1];
                    nomObjet--;
                    cond = 0;
                    j=0;
                }

                break;
            case 3:
                for(int i(0);i< nomObjet;i++){
                    objet[i]->imprimer();
                }
                break;
            default:cout << "Vous n'avez pas choisissez l'option correcte";
                break;
        }
    } while (choix >= 0 && choix < 4);
    return 0;
}



#pragma clang diagnostic pop