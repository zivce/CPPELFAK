#include "Tacka.h"
#include "Vektor.h"

void main() {
	
	int m, n;
	cout << "uneti broj tacaka V1" << endl;
	cin >> m;
	Vektor V1(m);
	cin >> V1;
	
	cout << "uneti broj tacaka V2" << endl;
	cin >> n;
	Vektor V2(n);
	cin >> V2;

	cout << V1 * V2;
	
	int k;

	cout << "uneti k" << endl;
	cin >> k;
	for (int i = 0; i < k;i++)
	V1++;


	++V2;

	cout << V1;
	cout << V2;
	V1.saberiInt(k);
	cout << V1;
}