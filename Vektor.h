#pragma once

#include "Tacka.h"


class Vektor {
	int v; //velicina
	Tacka* niz;//niz elementi tipa tacka
public:

	void oslobodiMem();
	void zauzmiMem(int);
	void kopirajNiz(const Vektor& V);

	inline int getV() { return this->v; };
	inline void setv(int f) { this->v = f; };
	Vektor& operator*(int a);//mnozenje skalarom
	double operator*(Vektor& B );//skalarno mnozenje dva vektora
	Vektor& operator++ (int);//postfix
	Vektor& operator++();//prefix
	void saberiInt(int);

	Vektor operator=(const Vektor& A);
	
	friend istream& operator>> (istream& ulaz, Vektor& V);
	friend ostream& operator<< (ostream& izlaz, Vektor& V);

	Vektor();//default
	Vektor(int);//postavljanje vel
	Vektor(const Vektor& v);
	~Vektor();
	inline void postaviK(Tacka& T1, int k );
	//postavljanje k-te tacke
	//u niz
	inline const Tacka vratiK(int k);//vrati k el

};

void Vektor::postaviK(Tacka& T1,int k) {//postavi tacku na k-to mesto
	niz[k].setX(T1.getX());
	niz[k].setY(T1.getY());
}


const Tacka Vektor::vratiK(int k) {//vrati Tacku sa k-tog mesta
	return niz[k];
}







//void operator&&(int);//rvalue operator
////ne moze da bude lvalue tj prefix
//void operator&();//lvalue operator
////prefix 