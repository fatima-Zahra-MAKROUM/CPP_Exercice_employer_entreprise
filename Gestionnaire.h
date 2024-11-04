#pragma once
#include "Employe.h"
class Gestionnaire :
    virtual public Employe
{
private:
     double salaire_hebdomadaire;
public:
    Gestionnaire(string nom = "", string prenom = "",double salaireH=0.0);
    void afficher()const;
    double calculerSalaire()const;
    ~Gestionnaire();
};

