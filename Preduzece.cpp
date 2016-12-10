#include "Preduzece.h"
#include "Radnik.h"


Preduzece::Preduzece() {
	Radnik** niz = new Radnik*[0];
	naziv = new char[100];
	naziv = "default";
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

	Radnik** niz = new Radnik*[countNiz];
	this->budget = budget;

}


Preduzece::~Preduzece() {
	for (int i = 0; i < countNiz; i++)
		delete niz[i];
	
}

void Preduzece::alocirajMem(int m) {
	niz = new Radnik*[m];
};



void Preduzece::kopirajNiz(Radnik** nizArg) {
	
	for (int i = 0; i < countNiz;i++)
	this->niz[i] = nizArg[i];

}

void Preduzece::oslobodiNiz(Radnik** niz) {
	
	for (int i = 0; i < countNiz;i++)
		delete niz[i];
	

}


void Preduzece::dodajRadnika(Radnik* Radnik) {
	
	Preduzece TMP(" ",maxCountNiz,countNiz,budget);


	TMP.kopirajNiz(this->niz);//kopiramo niz u pom
	// preduzece

	this->oslobodiNiz(niz);
	
	
	this->alocirajMem(countNiz + 1);


	this->kopirajNiz(TMP.niz);

	//index od 0

	if (countNiz+1 <= maxCountNiz)
		this->niz[countNiz + 1] = Radnik;

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
		++niz[i];

}

void Preduzece::operator--(int) {
	for (int i = 0; i < countNiz; i++)
		--niz[i];

}

void Preduzece::sort() {
	Radnik* p;

	for (int i = 0; i < countNiz; i++)
		for (int j = i + 1; j < countNiz;j++)
			if (niz[i]->getYearOld() > niz[j]->getYearOld()) {
				p = niz[i];
				niz[i] = niz[j];
				niz[j] = p;
			}
	delete p;
}
ostream&  operator<<(ostream& izlaz,Preduzece& A) {
	A.sort();
	for (int i = 0; i < A.countNiz; i++)
		izlaz << A.niz[i]->getIme()<<" "<<A.niz[i]->getPme();
	return izlaz;
}