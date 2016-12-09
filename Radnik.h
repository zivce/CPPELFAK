#pragma once
class Radnik {
protected:
	int JMBG;
	char* imePrezime;
	int yearEmp;
	int yearOld;
	int osnPlate;
public:
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