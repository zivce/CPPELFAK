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
void Polinom::setKoef(int k, double s) {
	this->niz[k] = s;

}
Polinom::Polinom(const Polinom& V) {
	this->setV(V.getV());

	for (int i = 0; i < this->getV(); i++)
		this->niz[i] = V.niz[i];


}

Polinom& operator*(const Polinom& v) {



}
