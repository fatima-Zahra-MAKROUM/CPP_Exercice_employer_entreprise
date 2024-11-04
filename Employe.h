#pragma once
#include <iostream>
#include "string.h"
#include "Salarie.h"

using namespace std;

class Employe : public Salarie
{
private:
	int nbheures;
	static int tauxH;
public:
	Employe(string nom = "", string prenom = "",int nbh= 0 );
	virtual double calculSalaire() const;
	virtual void afficher()const;
	~Employe();
};

