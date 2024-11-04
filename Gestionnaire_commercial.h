#pragma once
#include <iostream>
#include "Gestionnaire.h"
#include "Commercial.h"
class Gestionnaire_commercial: 
	public Gestionnaire, public Commercial
{
private:

public:
	Gestionnaire_commercial(string nom = "", string prenom = "", int TV = 0, double SH = 0.0);
	void afficher()const;
	double calculSalaire() const;
	~Gestionnaire_commercial();
};

