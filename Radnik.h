#include <fstream>
#include <iostream>
using namespace std;
#pragma once



class Radnik {
protected:
	int JMBG;
	char* ime;
	char* prezime;
	int yearEmp;
	int yearOld;
	int osnPlate;
public:
	Radnik();
	virtual ~Radnik();

	inline void setYearEmp(int m) {
		this->yearEmp = m;
	
	}

	char* alocirajString(char* m);
	

	inline int getJmbg() {
		return this->JMBG;
	}

	inline char* getIme() {
		return this->ime;
	}
	inline char* getPme() {
		return this->prezime;
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
	Developer();
	
	~Developer();
	int plataRadnika();
	friend istream& operator>>(istream& ulaz,Developer& B);
	void printData();

};

class Menager :public Radnik {
	int overTime;
	char* titula;
public:
	Menager();
	~Menager();
	int plataRadnika();
	friend istream& operator>>(istream& ulaz, Menager& B);
	void printData();

};



