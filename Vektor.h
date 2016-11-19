#ifndef VEKTOR_H_
#define VEKTOR_H_
#include "Tacka.h"
class Vektor {
	int v; //velicina
	Tacka* niz;//tip tacka
public:
	Vektor& operator++ (int);//postfix
	Vektor& operator++();//prefix

	friend istream& operator<< (istream& ulaz, Vektor& V);
	friend ostream& operator>> (ostream& izlaz, Vektor& V);

};



#endif
