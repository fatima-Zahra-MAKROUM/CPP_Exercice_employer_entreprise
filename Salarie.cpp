#include "Salarie.h"
int Salarie::comp = 0;

Salarie::Salarie(string nom, string prenom) :id(comp++), lname(nom), fname(prenom)

{
	cout << "constructeur salarie " << endl;

}

void Salarie::afficher() const
{
	cout << "afficher salarie " << endl;
	cout << "id : " << this->id << endl;
	cout << "nom : " << this->lname << endl;
	cout << "prenom : " << fname << endl;

}
Salarie::~Salarie()
{
	cout << "destructeur salarie " << endl;

}
