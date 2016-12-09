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
	Preduzece(char* naziv, int maxCount, int countNiz);
	~Preduzece();
	void dodajRadnika(Radnik* , int);
	void brisiRadnika(int);
	int ukupnaPlata();

	int profitFirme();

	Radnik* operator++(int);
	Radnik* operator--();

	friend ofstream& operator<<(ofstream& izlaz, Radnik*);
};

