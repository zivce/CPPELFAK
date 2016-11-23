#include "Tacka.h"
#include "Vektor.h"

void main() {
	
	Vektor V1(3);
	cin >> V1;
	
	Vektor V2(4);
	cin >> V2;

	cout << V1 * V2;
	cout << "\n\n\n";

	V1 = V2;
	cout << V1;
	cout << "\n\n\n";


	cout << V1 * 2;//mnozenje skalarom
	cout << "\n\n\n";
	cout << V2 * 3;//mnozenje skalarom
	cout << "\n\n\n";



	int k;

	cout << "uneti k" << endl;
	cin >> k;

	for (int i = 0; i < k;i++)
		V1++;// rótiranje k mesta udesno



	cout << V1;


	cout << "\n\n\n";
	
	V2.saberiInt(k);//sabiranje svakog elementa sa k


	cout << "\n\n\n";

	cout << V2;
}