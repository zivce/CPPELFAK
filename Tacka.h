#ifndef TACKA_H_
#define TACKA_H_

#include <iostream>
using namespace std;

class Tacka {
	double x;
	double y;
	double z;

	
public:
	Tacka();
	Tacka(double, double, double);
	~Tacka();
	Tacka(const Tacka& v);

	inline double getX() const; /*const correctness*/
	inline 	double getY() const;
	inline double getZ() const;

	void setX(double s);
	 void setY(double s);
	void setZ(double s);


	Tacka& operator+ (const Tacka& X);
	Tacka& operator- (const Tacka& X);

	friend istream& operator<< (istream& ulaz, Tacka& X);
	friend istream& operator>> (ostream& izlaz, Tacka& X);
};


double Tacka::getX()  const /*const correctness*/ {
	return x;
};
double Tacka::getY()  const/*const correctness*/ {
	return y;
};
double Tacka::getZ() const  /*const correctness*/ {
	return z;
};





#endif