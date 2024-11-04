#pragma once
#include <iostream>
using namespace std;

class Salarie
{
private:
	int id;
	static int comp;
	string lname;
	string fname;

public:
	Salarie(string nom = "", string prenom = "");
	void afficher()const;
	virtual double calculSalaire()const = 0;
	~Salarie();


};

