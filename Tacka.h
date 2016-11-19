#ifndef TACKA_H_
#define TACKA_H_
class Tacka {
	double x;
	double y;
	double z;
public:
	Tacka& operator+ (Tacka& X);

	Tacka& operator- (Tacka& X);

	friend Tacka& operator<< (istream& ulaz, Tacka& X);

	friend Tacka& operator>> (ostream& izlaz, Tacka& X);


};






#endif