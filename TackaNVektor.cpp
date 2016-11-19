#include "Vektor.h"
#include "Tacka.h"
/*
	Funkcije klase Vektor

*/

Vektor& Vektor::operator++(int) {//postfix
	Tacka tmp;
	tmp = niz[v]; //pomocni
	for (int i = v; i >= 0; i--)
		niz[i] = niz[i - 1];
	niz[0] = tmp;
}

Vektor& Vektor::operator++() {//prefix
	Tacka tmp;

	tmp = niz[0];
	for (int i = 0; i < v; i++)
		niz[i] = niz[i + 1];
	niz[v] = tmp;
}

istream& operator>>(istream& ulaz, Vektor& V) {//std unos
	double x, y, z;
	for (int i = 0; i < V.v; i++) {
		cout << "uneti" << i + 1 << "tacku (x y z)" << endl;
		cin >> x >> y >> z;
		V.niz[i].setX(x); 
		V.niz[i].setY(y);
		V.niz[i].setZ(z);
	}
	return ulaz;
}

ostream& operator<<(ostream& izlaz, Vektor& V) {
	for (int i = 0; i < V.v; i++) {
		cout << "(" << V.niz[i].getX() << " , " << V.niz[i].getY() << " , "
			<< V.niz[i].getZ() << ")" << endl;
	}
}

Vektor::Vektor() {//default konstruktor
	this->v = 1;
	int* niz = new int[1];
}

Vektor::Vektor() {//default konstruktor
	this->v = 1;
	int* niz = new int[1];
}
Vektor::Vektor(int k) {//konstruktor k el u nizu
	this->v = k;
	int* niz = new int[k];
}

Vektor::Vektor(const Vektor& V) {//cpy constructor
	for (int i = 0; i < this->v; i++)
		this->niz[i] = V.niz[i];
}


Vektor::~Vektor() {
	delete[] niz;
}
/*

	Funkcije Klase Tacka

*/


Tacka::Tacka() {//default konstruktor
	this->setX(0);
	this->setY(0);
	this->setZ(0);
}
Tacka::Tacka(double x, double y, double z) {//param konstr
	this->setX(x);
	this->setY(y);
	this->setZ(z);
}

Tacka:: ~Tacka() {//destruktor
}

Tacka::Tacka(const Tacka& V) {//cpy
	this->setX(V.x);
	this->setY(V.y);
	this->setZ(V.z);

}


