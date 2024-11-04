#include "Entreprise.h"
#include "Employe.h"
using namespace std;

int Entreprise::comp = 0;
int Entreprise::maxE = 10;

Entreprise::Entreprise():id(comp++), nbrE(0)
{
	cout << "constructeur Entreprise" << endl;

	this->Employers = new Employe * [maxE];
	for (int i = 0;i < maxE;i++)
	{
		this->Employers[i] = nullptr;
	}
}
void Entreprise::resize()
{
	this->maxE *= 2;
	Employe** newtable = new Employe * [maxE];
	for (int i = 0;i < maxE;i++)
	{
		newtable[i] = this->Employers[i];
	}
	for (int i = 0;i < maxE;i++)
	{
		newtable[i] = nullptr;
	}
	delete[]this->Employers;
	this->Employers = newtable;
}

void Entreprise::addEmploye(Employe* E)
{
	if (nbrE == maxE)  resize();
	nbrE++;
	this->Employers[nbrE] = E;
	
}

void Entreprise::afficher() const
{
	cout << "id : " << id << endl;
	for (int i = 0;i < nbrE;i++)
	{
	this->Employers[i]->afficher();

	}
}

void Entreprise::afficherSalaire() const
{
	for (int i = 0; i < maxE; i++)
	{
		double salaire = this->Employers[i]->calculSalaire();
		cout << "salaire de l'entreprise dont id est " << i << " : " << salaire << endl;
	}
}

Entreprise::~Entreprise()
{
	cout << "destructeur Entreprise" << endl;
	delete[]Employers;

}
