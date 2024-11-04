#pragma once
#include <iostream>
#include "string.h"
#include "Employe.h"
using namespace std;

class Commercial :
    virtual public Employe
{
private:
    int Tvente;
    static int commision;
public:
    Commercial(string nom="", string prenom="", int nbh = 0, int Tventee = 0);
    void afficher()const;
    double calculSalaire() const;
    ~Commercial();
};

