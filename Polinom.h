#pragma once
#include <iostream>
class Polinom {
private:
	int V;//stepen polinoma
	double* niz; //koeficijenti
	float arg;

public:
	void setArg(float arg);
	float getArg();

	Polinom();
	Polinom(int);
	~Polinom();
	Polinom(const Polinom& V);

	Polinom& operator=(const Polinom& v);
	Polinom& operator+(const Polinom& v);
	Polinom& operator*(const Polinom& v);



	void setKoef(int,double);//promena koeficijenta
	double getKoef();//get koeficijent




};