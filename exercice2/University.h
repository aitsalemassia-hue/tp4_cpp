

#ifndef UNIVERSITY_H_
#define UNIVERSITY_H_
#include<string>

class University {
private:
	std::string nom;
public:
	University(std::string nom);
	void afficherNom();
	virtual ~University();
};

#endif /* UNIVERSITY_H_ */
