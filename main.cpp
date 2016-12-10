#include "Preduzece.h"
#include "Radnik.h"

void main() {
	Preduzece B("Delos", 30,0,2000000);
	
	Menager* P = new Menager();
	
	cin >> *P;
	
	B.dodajRadnika(P);


	Developer D2;
	cin >> D2;


	/*if (B.profitFirme()) B++;
	else B--;

	cout << B;
*/
}