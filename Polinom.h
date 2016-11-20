#pragma once
#include <iostream>
class Polinom {
private:
	int V;//stepen polinoma
	double* niz; //koeficijenti
	double arg;

public:
	inline void setArg(double arg) {
		this->arg = arg;
	};
	inline double getArg() {return this->arg};

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
	double getKoef(int) {};//get koeficijent
	//prosledjen stepen



};