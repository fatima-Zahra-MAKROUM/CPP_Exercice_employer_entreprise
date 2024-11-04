#include "Commercial.h"

int Commercial::commision = 2;

Commercial::Commercial(string nom, string prenom, int nbh, int Tventee):Employe(nom,prenom,nbh), Tvente(Tventee)
{
	std::cout << "constructeur Commercial" << std::endl;

}

void Commercial::afficher() const
{
	std::cout << "afficher Commercial" << std::endl;
	Employe::afficher();
	std::cout << "tv Commercial :" << this->Tvente <<std::endl;

	
}

double Commercial::calculSalaire() const
{
	cout << "calculer commercial" << endl;
	double salaire_base = Employe::calculSalaire();
	return (salaire_base + (Tvente * commision));
}


Commercial::~Commercial()
{
	std::cout << "destructeur Commercial" << std::endl;

}
