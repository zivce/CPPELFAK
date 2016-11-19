#ifndef TACKA_H_
#define TACKA_H_
class Tacka {
	double x;
	double y;
	double z;
public:
	Tacka();
	Tacka(x, y, z);

	double getX();
	double getY();
	double getZ();


	Tacka& operator+ (Tacka& X);

	Tacka& operator- (Tacka& X);

	friend Tacka& operator<< (istream& ulaz, Tacka& X);

	friend Tacka& operator>> (ostream& izlaz, Tacka& X);


};






#endif