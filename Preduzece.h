#include "Radnik.h"

#pragma once



class Preduzece {
private:
	char* naziv;
	int budget;
	Radnik* niz;
	int maxCountNiz;
	int countNiz;
public:
	Preduzece(char*,int,int);
	~Preduzece();
	void dodajRadnika(Radnik* , int);
	void brisiRadnika(int);
	int ukupnaPlata(Radnik*);

	int profitFirme();

	Radnik* operator++(int);
	Radnik* operator--();

	friend ofstream& operator<<(ofstream& izlaz, Radnik*);
};

