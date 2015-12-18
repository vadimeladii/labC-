#include<iostream>
#include "Complex.h"

using namespace std;

int main()
{
	int x;
	int y;
	Complex *complex=new Complex();
	complex->affichageComplex();

	cout << "Changez les valeurs de x et y" << endl;
	complex->changeComplex();

	complex->affichageComplex();


	cout << "Modulul numarului complex este:\n|z|=" << complex->modulComplex() << endl<<endl;
	
	cout << "L'argument du z =\narg(z)=" << complex->argumentComplex()<<endl<<endl;

	complex->inversComplex();

	cout << "Suma cu alt numar complex"<< endl;
	cout << "Introduisez la partie reele du z1 :" << endl;
	cin >> x;
	cout << "Introduisez la partie imaginaire du z1 :" << endl;
	cin >> y;

	Complex *complex1=new Complex(x,y);
	*complex+=complex1;
	complex->affichageComplex();

	return 0;
}


