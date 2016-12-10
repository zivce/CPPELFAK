#include "Preduzece.h"
#include "Radnik.h"

Radnik& Radnik::operator||(Radnik& B) {

	if (this->yearOld > B.yearOld) {
		return *this;

	}
	else {
		return B;
	}
	//cmp

}


Radnik::Radnik() {
	this->imePrezime = new char[8];


	this->imePrezime = "default";

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
	delete imePrezime;
}



Developer::Developer() {
	

	this->titula = new char[8];

	this->titula = "default";
	this->overTime = 0;



}//default konstruktor


Menager::Menager() {


	this->titula = new char[8];

	this->titula = "default";
	this->overTime = 0;



}//default konstruktor - menager



Developer::Developer(char* titula, char* imeprezime,int yearold,int yearEmp, int overtime, int aosnPlate){
	this->overTime = overtime;
	this->titula = alocirajString(titula);

	for (int i = 0; i <= (strlen(titula) + 1); i++) {
		this->titula[i] = titula[i];
	}

	
	this->imePrezime = alocirajString(imeprezime);

	for (int i = 0; i <= (strlen(imeprezime) + 1); i++) {
		this->imePrezime[i] = imeprezime[i];
	}

	this->yearOld = yearold;

	this->yearEmp = yearEmp;

	this->osnPlate = aosnPlate;

}//konstruktor developera


Developer::~Developer() {
	delete[] titula;

}
int Developer::plataRadnika() {
	return (25 * osnPlate + 1500 * yearEmp + 1000 * overTime);
}

istream& operator>>(istream& ulaz,Developer& B) {
	cout << "uneti jmbg\n";
	cin >> B.JMBG;
	cout << "uneti ime i prezime developera\n";
	cin >> B.imePrezime;
	cout << "uneti godinu zaposljenja\n";
	cin >> B.yearEmp;
	cout << "uneti godinu starosti\n";
	cin >> B.yearOld;
	cout << "uneti osn plate\n";
	cin >> B.osnPlate;
	cout << "uneti prekovremeno\n";
	cin >> B.overTime;
	cout << "uneti titulu";
	cin >> B.titula;
	return ulaz;


}
void Developer::printData() {
	cout << this->imePrezime << "\n"
		<< this->JMBG << "\n" <<
		this->yearEmp << "\n" <<
		this->yearOld << "\n" <<
		this->osnPlate << "\n" <<
		this->overTime << "\n" <<
		this->titula << " developer\n";

}

Menager::Menager(char* titula, char* imeprezime, int yearold, int yearEmp, int overtime, int osnPlate) {
	this->overTime = overtime;
	this->titula = alocirajString(titula);

	for (int i = 0; i <= (strlen(titula) + 1); i++) {
		this->titula[i] = titula[i];
	}


	this->imePrezime = alocirajString(imeprezime);

	for (int i = 0; i <= (strlen(imeprezime) + 1); i++) {
		this->imePrezime[i] = imeprezime[i];
	}

	this->yearOld = yearold;

	this->yearEmp = yearEmp;

	this->osnPlate = osnPlate;

}//konstruktor menager

Menager::~Menager() {
	delete[] titula;

}

int Menager::plataRadnika() {
	return (30 * osnPlate + 1000 * yearEmp);
}


istream& operator>>(istream& ulaz, Menager& B) {
	cout << "uneti godinu zaposljenja\n";
	cin >> B.JMBG;
	cout << "uneti ime i prezime menagera\n";
	cin >> B.imePrezime;
	cout << "uneti godinu zaposljenja\n";
	cin >> B.yearEmp;
	cout << "uneti godinu starosti\n";
	cin >> B.yearOld;
	cout << "uneti osn plate\n";
	cin >> B.osnPlate;
	cout << "uneti prekovremeno\n";
	cin >> B.overTime;
	cout << "uneti titulu";
	cin >> B.titula;
	return ulaz;


}



void Menager::printData() {
	cout << this->imePrezime << "\n"
		<< this->JMBG << "\n" <<
		this->yearEmp << "\n" <<
		this->yearOld << "\n" <<
		this->osnPlate << "\n" <<
		this->overTime << "\n" <<
		this->titula << " menadzer\n";

}