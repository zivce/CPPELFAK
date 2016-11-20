#pragma once
#include <iostream>
class Polinom {
private:
	int V;//stepen polinoma
	double* niz; //koeficijenti
	double arg;

public:
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



	void setKoef(int, double);//promena koeficijenta
	inline double getKoef(int k) { return this->niz[k]; };//get koeficijent
	//prosledjen stepen



};