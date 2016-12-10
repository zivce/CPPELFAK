
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
	Radnik();
	virtual ~Radnik();

	inline int setYearEmp(int m) {
		this->yearEmp = m;
	}

	char* alocirajString(char* m);
	

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



	Radnik& operator|| (Radnik&); //cmp
	
	
	virtual void printData(Radnik&) = 0;


};



class Developer:public Radnik {
	int overTime;
	char* titula;
public:
	Developer(int,char*,char*,int,int,int);
	//postavlja overtime,titulu, imepr,yearold
	//yearEmp,osnplate
	~Developer();
	int plataRadnika(int,int,int);
	friend ifstream& operator>>(ifstream& ulaz, Developer& B);
	void printData(Developer& B);

};

class Menager :public Radnik {
	int overTime;
	char* titula;
public:
	Menager(int, char*);
	~Menager();
	int plataRadnika(int, int);
	friend ifstream& operator>>(ifstream& ulaz, Menager& B);
	void printData(Menager& B);

};



