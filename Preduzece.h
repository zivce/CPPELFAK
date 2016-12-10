#include "Radnik.h"

#pragma once



class Preduzece {
private:
	char* naziv;
	int budget;
	Radnik** niz;
	int maxCountNiz;
	int countNiz;
public:
	
	void oslobodiNiz(Radnik** niz);
	void alocirajMem(int m);
	void kopirajNiz(Radnik** niz);

	Preduzece();
	Preduzece(char* naziv, int maxCount, int countNiz,int budget);
	~Preduzece();
	void dodajRadnika(Radnik*);
	void brisiRadnika(int);
	int ukupnaPlata();

	int profitFirme();

	void operator++(int);
	void operator--(int);

	void sort();

	friend ostream& operator<<(ostream& izlaz,Preduzece& A);
};

