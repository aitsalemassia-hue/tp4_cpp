

#include "Etudiant.h"
#include<string>
#include<iostream>
int Etudiant::nbEtudiants = 0;
Etudiant::Etudiant(std::string nom,int age,University* universite):nom(nom),age(age),universite(universite) {
	++nbEtudiants;
}
void Etudiant::afficher(){
	std::cout<<"le nom de l'etudiant est "<<nom<<std::endl;
	std::cout<<"d'age :"<<age<<std::endl;
	 if (universite != nullptr) universite->afficherNom();

}


void Etudiant::afficherTotal(){
	std::cout << "Nombre total des etudiants : "
	              << nbEtudiants << std::endl;
}
Etudiant::~Etudiant() {
	// TODO Auto-generated destructor stub
}

