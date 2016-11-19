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

	inline 	void setX(double s) 
	{
		 this->x = s;
	};
	inline void setY(double s) {
		this->y = s;
	};
	inline 	void setZ(double s) {
		this->z = s;
	};


	Tacka& operator+ (const Tacka& X);
	Tacka& operator- (const Tacka& X);

	friend istream& operator<< (istream& ulaz, Tacka& X);

	friend istream& operator>> (ostream& izlaz, Tacka& X);


};






#endif