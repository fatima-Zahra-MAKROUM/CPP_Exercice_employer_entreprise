#include "Employe.h"
#include "Salarie.h"

int Employe::tauxH = 5;

Employe::Employe(string nom, string prenom, int nbh) :Salarie(nom, prenom),nbheures(nbh)
{
	std::cout << "constructeur employe" << std::endl;

}
double Employe::calculSalaire() const
{
	std::cout << "calcu employe" << std::endl;

	return (this->nbheures * this->tauxH );
}

void Employe::afficher() const
{
	std::cout << "afficher employe" << std::endl;
	Salarie::afficher();
	std::cout << "nbh de employe est" << this->nbheures << std::endl;
	std::cout << "taux de employe est" << this->tauxH << std::endl;

}

Employe::~Employe()
{
	std::cout << "dest employe" << std::endl;

}
