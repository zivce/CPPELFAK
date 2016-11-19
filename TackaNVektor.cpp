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
	tmp = niz[v]; //pomocni
	for (int i = v; i >= 0;i--)



}