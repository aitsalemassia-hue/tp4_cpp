

#ifndef ETUDIANT_H_
#define ETUDIANT_H_
#include<string>
#include "University.h"
class Etudiant {
private:
	std:: string nom;
	int age;
	static int nbEtudiants;
	University* universite;

public:

	Etudiant(std::string nom,int age ,University* universite);
	void afficher();
	static void afficherTotal();
	virtual ~Etudiant();
};

#endif /* ETUDIANT_H_ */
