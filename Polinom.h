#pragma once
#include <iostream>
class Polinom {
private:
	int V;//stepen polinoma
	double* niz; //koeficijenti
	float arg;

public:
	void setArg(float arg);
	Polinom();
	Polinom(int);
	~Polinom();
	Polinom(const Polinom& V);

	Polinom& operator=(const Polinom& v);




};