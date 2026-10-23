

#include "Livre.h"
#include <iostream>
int Livre::nbLivres = 0;
Livre::Livre(std::string titre, std::string auteur, int annee)
	    : titre(titre), auteur(auteur), annee(annee){
		++nbLivres;
}


void Livre::afficher(){
	std::cout<<"le titre :"<<titre<<std::endl;
	std::cout << "Auteur : " << auteur << std::endl;
	std::cout << "Annee : " << annee << std::endl;

}

void Livre::afficherTotal() {
    std::cout << "Nombre total de livres crees : "
              << nbLivres << std::endl;
}


Livre::~Livre() {
	// TODO Auto-generated destructor stub
}

