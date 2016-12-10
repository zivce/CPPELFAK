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

Developer::Developer(int overtime, char* titula, char* imeprezime,int yearold,int yearEmp,int osnPlate){
	this->overTime = overtime;
	this->titula = alocirajString(titula);

	for (int i = 0; i < (strlen(titula) + 1); i++) {
		this->titula[i] = titula[i];
	}

	
	this->imePrezime = alocirajString(imeprezime);



}