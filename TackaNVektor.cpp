#include "Vektor.h"
#include "Tacka.h"
/*
	Funkcije klase Vektor

*/
int Vektor::getV() {
	return this->v;
}

void Vektor::setV(int k) {
	this->v = k;

}

Vektor& Vektor::operator++(int) {//postfix
	Tacka tmp;
	int v = getV();
	tmp = niz[v]; //pomocni
	for (int i = v; i >= 0; i--)
		niz[i] = niz[i - 1];
	niz[0] = tmp;
}

Vektor& Vektor::operator++() {//prefix
	Tacka tmp;
	int v = getV();

	tmp = niz[0];
	for (int i = 0; i < v; i++)
		niz[i] = niz[i + 1];
	niz[v] = tmp;
}

istream& operator>>(istream& ulaz, Vektor& V) {//std unos
	for (int i = 0; i < V.v; i++) {
		cout << "uneti" << i + 1 << "tacku" << endl;
		cin >> V.niz[i].setX();
	}

}