
#pragma once

#include <iostream>
using namespace std;


class Radnik {
protected:
	int JMBG;
	char* imePrezime;
	int yearEmp;
	int yearOld;
	int osnPlate;
public:

	Radnik();
	virtual ~Radnik();

	inline int getJmbg() {
		return this->JMBG;
	}

	inline char* getImePrezime() {
		return this->imePrezime;
	}

	inline int getYearEmp() {
		return this->yearEmp;
	}
	virtual int plataRadnika(int)=0;

	int operator++(int);

	int operator--(int);



	Radnik& operator- (const Radnik&); //cmp
	
	
	virtual void printData() = 0;


};



class Developer:public Radnik {
	int overTime;
	char* titula;
public:
	Developer(int,char*);
	int odrediPlatu(int,int,int);
	friend istream& operator>>(istream& ulaz, Developer& B);


};