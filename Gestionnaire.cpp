#include "Gestionnaire.h"

Gestionnaire::Gestionnaire(string nom, string prenom,double salaireH) :Employe(nom, prenom),salaire_hebdomadaire(salaireH)
{
	std::cout << "constructeur Gestionnaire" << std::endl;

}

void Gestionnaire::afficher() const
{
	std::cout << "afficher Gestionnaire" << std::endl;
	Employe::afficher();
	cout << "le Salaire hebdomadaire est: " << salaire_hebdomadaire << endl;

}

double Gestionnaire::calculerSalaire() const
{
	cout << "calculer Gestionnaire" << endl;
	return (salaire_hebdomadaire * 4);
	//salaire hebdo est salaire par semaine
}


Gestionnaire::~Gestionnaire()
{
	std::cout << "destructeur Gestionnaire" << std::endl;

}
