#include "Preduzece.h"
#include "Radnik.h"

void main() {
	Preduzece B("Delos", 30,0,2000000);
	
	for (int i = 0; i < 4;i++){
	Menager* P = new Menager();
	cin >> *P;
	B.dodajRadnika(P);
	}


	/*if (B.profitFirme()) B++;
	else B--;

	cout << B;
*/
}