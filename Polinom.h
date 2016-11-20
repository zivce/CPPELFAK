#pragma once
#include <iostream>
class Polinom {
private:
	int V;//stepen polinoma
	double* niz; //koeficijenti
	double arg;

public:
	void setArg(double arg);
	double getArg();

	Polinom();
	Polinom(int);
	~Polinom();
	Polinom(const Polinom& V);
	double izrP(double arg);//izracunaj za dati arg
	double* polinomNiz();//polinom u niz


	Polinom& operator=(const Polinom& v);
	Polinom& operator+(const Polinom& v);
	Polinom& operator*(const Polinom& v);



	void setKoef(int,double);//promena koeficijenta
	double getKoef();//get koeficijent




};