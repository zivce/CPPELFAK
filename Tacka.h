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

	inline double getX() const /*const correctness*/ {
		return x;
	};
	inline 	double getY() const{
		return y;
	};
	inline double getZ() const {
		return z;
	};

	inline 	double setX(double s) /* const pre definicije f-je 
								  ne dozvoljava promenu this*/ 
	{
		 this->x = s;
	};
	inline 	double setY(double s) {
		this->y = s;
	};
	inline 	double setZ(double s) {
		this->z = s;
	};


	Tacka& operator+ (const Tacka& X);
	Tacka& operator- (const Tacka& X);

	friend Tacka& operator<< (istream& ulaz, Tacka& X);

	friend Tacka& operator>> (ostream& izlaz, Tacka& X);


};






#endif