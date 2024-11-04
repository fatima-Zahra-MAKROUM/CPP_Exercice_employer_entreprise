#pragma once
#include<string>
#include"Employe.h"
using namespace std;
class Entreprise
{
private:
	int id;
	static int comp;
	static int maxE;
	int nbrE;
	Employe** Employers;
public:
	Entreprise();
	void resize();
	void addEmploye(Employe* E);
	void afficher()const;
	void afficherSalaire()const;
	~Entreprise();

};

