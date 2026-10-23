
#include "University.h"
#include<string>
#include <iostream>
University::University(std::string nom):nom(nom){}
void University::afficherNom(){
	std::cout<<"le Nom de l'Universite est:"<<nom<<std::endl;
}
University::~University() {
	// TODO Auto-generated destructor stub
}

