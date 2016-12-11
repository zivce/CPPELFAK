#include "Preduzece.h"
#include "Radnik.h"

bool Radnik::operator||(Radnik& B) {

	if (this->yearOld > B.yearOld) {
		return 1;

	}
	else {
		return 0;
	}
	//cmp

}
void Radnik::operator++(){
	osnPlate = 1.1 * osnPlate;
};

void Radnik::operator--() {

	osnPlate = 0.9 * osnPlate;
};


Radnik::Radnik() {
	this->ime = new char[100];


	this->prezime = new char[100];

	this->JMBG = 0;

	this->yearOld = 0;

	this->yearEmp = 0;

	this->osnPlate = 0;

}
char* Radnik::alocirajString(char* title) {
	int i = 0;
	char* tmp;
	int strLeng = strlen(title)+1;
	tmp = new char[strLeng];
	return tmp;
	
}




Radnik::~Radnik() {
	if (ime != 0) delete ime;
	if (prezime != 0) delete prezime;

}



Developer::Developer() {
	

	this->titula = new char[100];
	this->overTime = 0;



}//default konstruktor


Menager::Menager() {


	this->titula = new char[100];
	this->overTime = 0;



}//default konstruktor - menager






Developer::~Developer() {

	if (titula != 0) delete[] titula;
}
int Developer::plataRadnika() {
	return (25 * osnPlate + 1500 * yearEmp + 1000 * overTime);
}

istream& operator>>(istream& ulaz,Developer& B) {
	

	cout << "uneti jmbg, ime i prezime dev-a,\n" <<
		"godinu zaposljenja, godinu starosti , osn plate,  prekovremeno i titulu\n";

	ulaz >> B.JMBG >> B.ime >> B.prezime >> B.yearEmp >> B.yearOld >> B.osnPlate >> B.overTime >> B.titula;
	
	return ulaz;


	

}
void Developer::printData() {
	cout << this->ime << this->prezime << "\n"
		<< this->JMBG << "\n" <<
		this->yearEmp << "\n" <<
		this->yearOld << "\n" <<
		this->osnPlate << "\n" <<
		this->overTime << "\n" <<
		this->titula << " developer\n";

}


Menager::~Menager() {
	if (titula != 0) delete[] titula;
}

int Menager::plataRadnika() {
	return (30 * osnPlate + 1000 * yearEmp);
}


istream& operator>>(istream& ulaz, Menager& B) {
	cout << "uneti jmbg, ime i prezime menagera,\n"<< 
		"godinu zaposljenja, godinu starosti , osn plate,  prekovremeno i titulu\n";
	ulaz >> B.JMBG >> B.ime >>B.prezime >> B.yearEmp >> B.yearOld >> B.osnPlate >> B.overTime >> B.titula;
	
	return ulaz;


}



void Menager::printData() {
	cout << "\n\n" << this->ime << "\n" << this->prezime << "\n"
		<< this->JMBG << "\n" <<
		this->yearEmp << "\n" <<
		this->yearOld << "\n" <<
		this->osnPlate << "\n" <<
		this->overTime << "\n" <<
		this->titula << " menadzer\n";

}