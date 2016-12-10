#include "Preduzece.h"
#include "Radnik.h"

void main() {
	Preduzece B("Delos", 30,0,2000000);
	
	for (int i = 0; i < 4;i++){
		Menager* P = new Menager();
		cin >> *P;
		B.dodajRadnika(P);
	}


	for (int i = 0; i < 4; i++) {
		Developer* M = new Developer();
		cin >> *M;
		B.dodajRadnika(M);
	}


	if (B.profitFirme()) B++;
	else B--;

	cout << B;
}