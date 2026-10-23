

#ifndef LiVRE_H_
#define LiVRE_H_
#include<string>

class Livre {
private:
	std::string titre;
	std::string auteur;
	int annee;
	static int  nbLivres;
public:
	Livre();

	Livre(std::string titre, std::string auteur, int anne);

	void afficher();
	void static afficherTotal();
	virtual ~Livre();

};

#endif /* LIVRE_H_ */
