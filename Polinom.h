#pragma once
#include <iostream>
struct Complex
{
	double r;
	double i;

};
class Polinom {
private:
	int V;//stepen polinoma
	double* niz; //koeficijenti
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
	double* polinomNiz();//polinom u niz


	Polinom& operator=(const Polinom& v);
	Polinom& operator+(const Polinom& v);
	Polinom& operator*(const Polinom& v);

	void rFFT(int* a, Complex* y, int n, int inv);
	/*
	**	inv ako je 0 radi FFT ako je 1 radi iFFT
	**
	**
	**
	*/

	void setKoef(int, double);//promena koeficijenta
	inline double getKoef(int k) const{ return this->niz[k]; };//get koeficijent
	//prosledjen stepen



};