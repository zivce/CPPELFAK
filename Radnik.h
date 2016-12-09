
#include <iostream>
using namespace std;
#pragma once



class Radnik {
protected:
	int JMBG;
	char* imePrezime;
	int yearEmp;
	int yearOld;
	int osnPlate;
public:

	virtual ~Radnik();

	inline int setYearEmp(int m) {
		this->yearEmp = m;
	}


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

	int operator++(int) {
		osnPlate = 1.1 * osnPlate;
	};

	int operator--(int) {

		osnPlate = 0.9 * osnPlate;
	};



	Radnik& operator- (const Radnik&); //cmp
	
	
	virtual void printData() = 0;


};



class Developer:public Radnik {
	int overTime;
	char* titula;
public:
	Developer(int,char*);
	~Developer();
	int odrediPlatu(int,int,int);
	friend istream& operator>>(istream& ulaz, Developer& B);


};

class Menager :public Radnik {
	int overTime;
	char* titula;
public:
	Menager(int, char*);
	~Menager();
	int odrediPlatu(int, int);
	friend istream& operator>>(istream& ulaz, Menager& B);


};



