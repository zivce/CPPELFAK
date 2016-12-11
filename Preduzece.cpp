#include "Preduzece.h"
#include "Radnik.h"


Preduzece::Preduzece() {
	alocirajMem(1);
	naziv = new char[100];
	this->maxCountNiz = 0;
	this->countNiz = 0; 
}

Preduzece::Preduzece(char* argnaziv, int argmaxcount, int argcount,int budget) {
	int i = 0; int strlen=0;
	while (argnaziv[i++] != '\0') strlen++;
	
	this->naziv = new char[strlen];
	naziv = argnaziv;

	this->maxCountNiz = argmaxcount;
	this->countNiz = argcount;
	alocirajMem(maxCountNiz);

	this->budget = budget;

}


Preduzece::~Preduzece() {
	if(niz!=0){
		int i=0;
		if (niz[i] !=0)
			for (i; i < countNiz;i++)
				delete niz[i];
		delete[] niz;
	}
	
}

void Preduzece::alocirajMem(int m) {
	niz = new Radnik*[m];
	for (int i = 0; i < m; i++)
		niz[i] = 0;
};


void Preduzece::kopirajNiz(Radnik** nizArg) {
	
	for (int i = 0; i < countNiz;i++)
		this->niz[i] = nizArg[i];
	
}

void Preduzece::oslobodiNiz(Radnik** niz) {
	
	int i = 0;
	if(niz[i]!=0)
		for (i; i < countNiz;i++)
			delete niz[i];
	

}


void Preduzece::dodajRadnika(Radnik* Radnik) {
	Preduzece* TMP= new Preduzece(" ", maxCountNiz, countNiz+1, budget);

	TMP->kopirajNiz(this->niz);
	//this->oslobodiNiz(this->niz);
	this->alocirajMem(countNiz + 2);
	this->kopirajNiz(TMP->niz);

	if (countNiz <= maxCountNiz)
		this->niz[countNiz] = Radnik;
	countNiz++;
}



void Preduzece::brisiRadnika(int JMBG) {
	
	for (int j = 0; j < countNiz;j++){
		int m = niz[j]->getJmbg();
		if (m == JMBG)
		{
			niz[j]->setYearEmp(0);
			delete niz[j];
			niz[j] = 0;
			countNiz--;
		}
	}
}


int Preduzece::ukupnaPlata() {
	int s = 0;
	for (int i = 0; i < countNiz; i++)
		s += niz[i]->plataRadnika();
	return s;
}

int Preduzece::profitFirme() {
	if (this->budget > this->ukupnaPlata())
		return 1;
	else {
		return 0;
	}

}


void Preduzece::operator++(int) {
	for (int i = 0; i < countNiz; i++)
		++(*niz[i]);

}

void Preduzece::operator--(int) {
	for (int i = 0; i < countNiz; i++)
		--(*niz[i]);

}

void Preduzece::sort() {
	Radnik* p = new Menager;

	for (int i = 0; i < countNiz; i++)
		for (int j = i + 1; j < countNiz;j++)
			if (niz[i]->getYearOld() > niz[j]->getYearOld()) {
				p = niz[i];
				niz[i] = niz[j];
				niz[j] = p;
			}
	
}
ostream&  operator<<(ostream& izlaz,Preduzece& A) {
	A.sort();
	for (int i = 0; i < A.countNiz; i++)
		izlaz << A.niz[i]->getIme()<<" "<<A.niz[i]->getPme();
	return izlaz;
}