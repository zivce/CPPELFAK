#ifndef VEKTOR_H_
#define VEKTOR_H_
#include "Tacka.h"
class Vektor {
	int v; //velicina
	Tacka* niz;//niz elementi tipa tacka
public:
	int getV();
	void setV(int);

	Vektor& operator++ (int);//postfix
	Vektor& operator++();//prefix

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
	void urediV();//uredi u neopadajuci

};

void Vektor::postaviK(Tacka& T1,int k) {//postavi tacku na k-to mesto
	niz[k].setX(T1.getX());
	niz[k].setY(T1.getY());
}


const Tacka Vektor::vratiK(int k) {//vrati Tacku sa k-tog mesta
	return niz[k];
}
#endif
