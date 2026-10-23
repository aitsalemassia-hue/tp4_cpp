#include<string>
#include"Etudiant.h"



int main(){
	University U1("Cadi ayyad");
	University U2("Hassan 2");


	Etudiant E1("Ahmed",18,&U2);
	Etudiant E2("Assiya ait salem",21,&U1);
	Etudiant E3("salma said",19,&U1);
	Etudiant E4("Fatima naji",20,&U2);
	Etudiant E5("Marwa nabil",21,&U1);


	Etudiant etudiants[5]={E1,E2,E3,E4,E5};
	for (Etudiant& e:etudiants){
		e.afficher();
	}


	Etudiant::afficherTotal();


}




