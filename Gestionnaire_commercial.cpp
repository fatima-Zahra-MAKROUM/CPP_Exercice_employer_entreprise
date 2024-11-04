#include "Gestionnaire_commercial.h"


Gestionnaire_commercial::Gestionnaire_commercial(string nom, string prenom, int tv, double sh):Commercial(nom, prenom, tv), Gestionnaire(nom, prenom, sh)
{
    cout << "constructeur Gestionnaire_commercial" << endl;

}

void Gestionnaire_commercial::afficher() const
{
    cout << "afficher Gestionnaire_commercial" << endl;

}

double Gestionnaire_commercial::calculSalaire() const
{
    return 0.0;
}

Gestionnaire_commercial::~Gestionnaire_commercial()
{
    cout << "destructeur Gestionnaire_commercial" << endl;

}
