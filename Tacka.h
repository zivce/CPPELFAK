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

	double getX();
	double getY();
	double getZ();

	double setX(double) const;
	double setY(double) const;
	double setZ(double) const;


	Tacka& operator+ (Tacka& X);

	Tacka& operator- (Tacka& X);

	friend Tacka& operator<< (istream& ulaz, Tacka& X);

	friend Tacka& operator>> (ostream& izlaz, Tacka& X);


};






#endif