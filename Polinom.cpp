#include "Polinom.h"
#include <math.h>
# define M_PI  3.14159265358979323846  /* pi */

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


/*
Complex* Polinom::rFFT(Complex* a, Complex* y, int n, int inv) {
	Complex w, wn;
	Complex* a0;
	Complex* a1;
	Complex* y0;
	Complex* y1;
	int i, k;

	if (n == 1) return a0[0];//uslov rekurzije

	//osnovni nti koren jedinice
	if (inv) {//ako je 0 ide se u else odnosno
		//radi se rFFT
		wn.r = cos(2 * M_PI / n);
		wn.i = sin(2 * M_PI / n);
	}
	else {
		wn.r = cos(2 * M_PI / n);
		wn.i = sin(2 * M_PI / n);

	}
	w.r = 1.0;
	w.i = 0.0;

	a0 = new Complex[n / 2];
	a1 = new Complex[n / 2];

	y1 = new Complex[n / 2];
	y0 = new Complex[n / 2];

	for (i = 0; i < n / 2; i++)
	{
		a0[i] = a[2 * i];

		a1[i] = a[2 * i +1];
	}

	rFFT(a0, y0, n / 2, 0);
	rFFT(a1, y1, n / 2, 0);

	for (k = 0; k < n / 2; k++) {
		Complex t = comp_mul(w, y1[k]);
		y[k] = comp_add(y0[k],t);
		//punimo prvu polovinu
		y[k + n / 2] = comp_add(y0[k], t);
		//punimo drugu polovinu
		w = comp_mul(w, wn);
	}




	return y;
	delete(a0);
	delete(a1);
	delete(y1);
	delete(y0);


}//end_rFFT
*/
/* 
Complex* Polinom::poly_mul(Complex* A, Complex* B, int n) {
	Complex* yA;
	Complex* yB;

	yA = new Complex[n];

	yB = new Complex[n];

	yA = rFFT(A, yA, n, 0);

	yB = rFFT(B, yB, n, 0);

	for (int j = 0; j < n; j++)
		yA[j] = comp_mul(yA[j], yB[j]);
	
	rFFT(yA, A, n, 1);

	for (int j = 0; j < n; j++)
		A[j].r = A[j].r / n;
	
	
	return A;


	delete(yA); delete(yB);

}
*/

