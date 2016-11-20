#pragma once
#include <iostream>
using namespace std;
struct Complex
{
	double r;
	double i;

};
class Polinom {
private:
	int V;//stepen polinoma
	Complex* niz; //koeficijenti
	double arg;

public:
	inline void setV(int k) { this->V = k; }
	inline int getV() const{ return this->V; };
	inline void setArg(double arg) {
		this->arg = arg;
	};
	inline double getArg() const{return this->arg};

	Polinom();
	Polinom(int);
	~Polinom();
	Polinom(const Polinom& V);
	double izrP(double arg);//izracunaj za dati arg
	Complex* polinomNiz();//polinom u niz
	

	Polinom& operator=(const Polinom& v);
	Polinom& operator+(const Polinom& v);
	Polinom& operator*(const Polinom& v);

	/*
	**	inv ako je 0 radi FFT ako je 1 radi iFFT
	**	n broj elemenata a
	**	y je niz n kompleksnih brojeva
	**	koji su evaluirani na polinomu
	**	za n korena jedinice
	**	a = vektor koeficijenata complex
	*/

	Complex* rFFT(Complex* a, Complex* y, int n, int inv);
	

	/*
	**	Mnozi A i B i vraca rez u A
	**	A = smesta se vektor koef. polinoma
	*/

	Complex* poly_mul(Complex* A, Complex* B, int n);

	


	/*

	**	Mnozi A i B i vraca rez
	**	A i B su kompleksni brojevi


	*/
	inline Complex comp_mul(Complex a, Complex b) {
		Complex ans; 
		ans.r = a.r * b.r - a.i*b.i;
		ans.i = a.r * b.i + a.i * b.r;
		return ans;
	}

	inline Complex comp_add(Complex a, Complex b) {
		Complex ans;
		ans.r = a.r + b.r;
		ans.i = a.i + b.i;
		return ans;

	}
	inline Complex comp_add(Complex a, Complex b) {
		Complex ans;
		ans.r = a.r - b.r;
		ans.i = a.i - b.i;
		return ans;

	}

	void setKoef(int, double);//promena koeficijenta
	inline double getKoef(int k) const{ return this->niz[k]; };//get koeficijent
	//prosledjen stepen



};