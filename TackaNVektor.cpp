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


}