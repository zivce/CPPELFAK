#include "Preduzece.h"
#include "Radnik.h"


Preduzece::Preduzece() {
	naziv = new char[100];
	naziv = "default";
	this->maxCountNiz = 0;
	this->countNiz = 0; 
}

Preduzece::Preduzece(char* argnaziv, int argmaxcount, int argcount) {
	int i = 0; int strlen=0;
	while (argnaziv[i++] != '\0') strlen++;
	
	this->naziv = new char[strlen];
	naziv = argnaziv;

	this->maxCountNiz = argmaxcount;
	this->countNiz = argcount;



}


Preduzece::~Preduzece() {
	delete[] naziv;
	delete[] niz;

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


void Preduzece::dodajRadnika(Radnik* radnik) {
	
	Preduzece TMP(" ",maxCountNiz,countNiz);


	TMP.kopirajNiz(this->niz);//kopiramo niz u pom
	// preduzece

	this->oslobodiNiz(niz);
	
	
	this->alocirajMem(countNiz + 1);


	this->kopirajNiz(TMP.niz);

	//index od 0

	if (countNiz+1 <= maxCountNiz)
		this->niz[countNiz + 1] = radnik;

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
		s += niz[i]->plataRadnika;
	return s;
}

void Preduzece::profitFirme() {
	if (this->budget > this->ukupnaPlata())
		cout << "rentabilna";
	else {
		cout << "nerentabilna";
	}

}


void Preduzece::operator++() {
	for (int i = 0; i < countNiz; i++)
		++niz[i];

}

void Preduzece::operator--() {
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
		cout << A.niz[i]->getImePrezime();
	return izlaz;
}