#include "Vektor.h"
#include "Tacka.h"
#include <stdlib.h>
/*
	Funkcije klase Vektor

*/

void Vektor::dodajTNula() {//Dodaj Padding Nulu
	Vektor* TMP; //pomocni za dodavanje
	Tacka T;//(0,0,0)
	TMP = new Vektor(this->v + 1);
	int i;
	for (i = 0; i < this->v; i++)
		TMP->niz[i] = this->niz[i];
	TMP->niz[i] = T;
	*this = *TMP;

}

Vektor& Vektor::operator*(Vektor& v) {
	int M, N;
	Vektor* S;
	S = new Vektor[1];
	M = this->v;
	N = v.v;

	if (M > N) {
		int r = M - N; 
		for (int j = 0; j < r; j++) 
			v.dodajTNula();
		
	}
	else if (M < N) {
		int r = N - M;
		for (int j = 0; j < r; j++)
			this->dodajTNula();
	}//adding padding


	double P = 0, Q = 0, R = 0;
	for (int i = 0; i < M; i++) {

		P += this->niz[i].getX() * v.niz[i].getX();

		Q += this->niz[i].getY() * v.niz[i].getY();

		R += this->niz[i].getZ() * v.niz[i].getZ();
	}

	S->niz[0].setX(P);
	S->niz[0].setY(Q);
	S->niz[0].setZ(R);

	return *S;

}

Vektor& Vektor::operator++(int) {//postfix
	Tacka tmp;
	
	tmp = niz[v - 1]; //pomocni
	for (int i = v-1; i > 0; i--)
		niz[i] = niz[i - 1];
	niz[0] = tmp;

	return *this;
}

Vektor& Vektor::operator++() {//prefix
	Tacka tmp;

	tmp = niz[0];
	for (int i = 0; i < this->v-1; i++)
		niz[i] = niz[i + 1];
	niz[this->v-1] = tmp;
	return *this;

}



ostream& operator<<(ostream& izlaz, Vektor& V) {
	for (int i = 0; i < V.v; i++) {
		cout << "(" << V.niz[i].getX() << " , " << V.niz[i].getY() << " , "
			<< V.niz[i].getZ() << ")" << endl;
	}
	return izlaz;
}



Vektor::Vektor() {//default konstruktor
	this->v = 1;
	niz = new Tacka[1];
}

istream& operator>>(istream& ulaz, Vektor& V) {//std unos
	double x, y, z;
	for (int i = 0; i < V.v; i++) {
		cout << "uneti " << i + 1 << " tacku (x y z)" << endl;
		cin >> x >> y >> z;
		V.niz[i].setX(x);
		V.niz[i].setY(y);
		V.niz[i].setZ(z);
	}
	return ulaz;
}

Vektor::Vektor(int k) {//konstruktor k el u nizu
	this->v = k;
	Tacka t;
	niz = new Tacka[k];
	

}

Vektor::Vektor(const Vektor& V) {//cpy constructor
	for (int i = 0; i < this->v; i++)
		this->niz[i] = V.niz[i];
}
void Vektor::saberiInt(int k) {
	for (int i = 0; i < v; i++) {
		this->niz[i].setX(this->niz[i].getX() + k);

		this->niz[i].setY(this->niz[i].getY() + k);

		this->niz[i].setZ(this->niz[i].getZ() + k);
	}

}

Vektor::~Vektor() {
	delete[] niz;
}
/*

**	Funkcije Klase Tacka

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


Tacka& Tacka::operator+(const Tacka& V) {
	Tacka tmp;
	tmp.setX(V.x + this->getX());
	tmp.setY(V.y + this->getY());
	tmp.setZ(V.z+ this->getZ());
	return tmp;
}

Tacka& Tacka::operator-(const Tacka& V) {
	Tacka tmp;
	tmp.setX(V.x - this->getX());
	tmp.setY(V.y - this->getY());
	tmp.setZ(V.z - this->getZ());
	return tmp;
}

istream& operator>>(istream& ulaz, Tacka& T) {
	double x, y, z;
	cin >> x >> y >> z;
	T.setX(x); T.setY(y); T.setZ(z);
	return ulaz;
}

ostream& operator<<(ostream& izlaz, Tacka& T) {
	cout << T.getX() << "," << T.getY() << "," << T.getZ() << endl;
	return izlaz;
}

void Tacka::setX(double s) {
	this->x = s;
};

void Tacka::setY(double s) {
	this->y = s;
};

void Tacka::setZ(double s) {
	this->z = s;
};
