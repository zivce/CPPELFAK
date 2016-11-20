#include "Polinom.h"

Polinom::Polinom() {
	this->V = 1;
	niz = new double[1];
	}
Polinom::Polinom(int k) {
	this->V = k;
	niz = new double[k];
}

Polinom::~Polinom() {
	delete[] niz;
}


