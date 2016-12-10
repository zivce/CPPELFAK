#include "Preduzece.h"
#include "Radnik.h"

void main() {
	Preduzece B("Delos", 30,0);

	Developer D1();
	cin >> D1;
	Developer D2("projektant", "Stanimir Milosevic", 40,5, 10, 3);
	Developer D3("programerka", "Stana Milosev", 32, 10, 10, 10);
	Developer D4("tester", "Mila Stanimilosevic", 33, 5, 4, 5);

	Menager M1("marketinski", "Milos Stanimirovic", 31, 2, 3, 20);
	Menager M2("finansijski", "Stanimir Milosevic", 23, 3, 4, 30);
	
	B.dodajRadnika(D1);
	B.dodajRadnika(D2);
	B.dodajRadnika(D3);
	B.dodajRadnika(D4);

	B.dodajRadnika(M1);
	B.dodajRadnika(M2);




}