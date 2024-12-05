#ifndef POMPE3CARBURANTS_HPP
#define POMPE3CARBURANTS_HPP
#include "Carburant.hpp"
#include "Afficheur.hpp"
#include "Pompe.hpp"
#include <string>
#include <iostream>

class Pompe3carburants {
private:
    Afficheur afficheur; 
    Carburant carburants[3];
    int carburant_actuel;
public:
    Pompe3carburants(Carburant c1, Carburant c2, Carburant c3);
    void afficherTousLesCarburants() const ;
    void choisir(int choix);
    void servir(double quantite);
    void facturer();
};

#endif