#include <fstream>
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

	inline int getYearOld() {
		return this->yearOld;

	}

	inline int getYearEmp() {
		return this->yearEmp;
	}
	virtual int plataRadnika()=0;

	void operator++() {
		osnPlate = 1.1 * osnPlate;
	};

	void operator--() {

		osnPlate = 0.9 * osnPlate;
	};



	Radnik& operator|| (Radnik&); //cmp
	
	
	virtual void printData() = 0;


};



class Developer:public Radnik {
	int overTime;
	char* titula;
public:
	Developer(char* titula ,char* imeprezime,int yearold,int yearEmp, int overtime, int osnPlate);
	//postavlja overtime,titulu, imepr,yearold
	//yearEmp,osnplate
	~Developer();
	int plataRadnika();
	friend istream& operator>>(istream& ulaz,Developer& B);
	void printData();

};

class Menager :public Radnik {
	int overTime;
	char* titula;
public:
	Menager(int, char*,char*, int, int, int);
	~Menager();
	int plataRadnika();
	friend istream& operator>>(istream& ulaz, Menager& B);
	void printData();

};



