#ifndef POMPE_HPP
#define POMPE_HPP
#include "Carburant.hpp"
#include "Afficheur.hpp"
#include <string>
#include <iostream>

class Pompe {
private:
    Afficheur afficheur;   
    Carburant cuve;        

public:
    Pompe(double prix_carb, string type_carb, double quantite_carb);

    void choisir() ;

    void servir(double quantite) ;

    void facturer() ;
};

#endif