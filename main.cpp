#include "Preduzece.h"
#include "Radnik.h"

void main() {
	Preduzece B("Delos", 30,0,2000000);
	
		Menager* P = new Menager();
		cin >> *P;
		B.dodajRadnika(P);


		Menager* I = new Menager();
		cin >> *I;
		B.dodajRadnika(I);


		Developer* M = new Developer();
		cin >> *M;
		B.dodajRadnika(M);
	


	if (B.profitFirme()) B++;
	else B--;

	cout << B;
}