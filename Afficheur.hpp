#ifndef AFFICHEUR_HPP
#define AFFICHEUR_HPP

using namespace std;

class Afficheur
{
private:
    double litres;
    double prix_litre;
    double somme;
public:
    Afficheur(double init_prix_litre);

    void incrementer (double quantite);

    void afficher();
};

#endif