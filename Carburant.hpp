#ifndef CARBURANT_HPP
#define CARBURANT_HPP
#include <string>
#include <iostream>

using namespace std;

class Carburant {
private:
    string type;
    double quantite;
    double prix;

public:
    Carburant(string t, double q, double p);

    string getType() const ;

    double getQuantite() const ;

    double getPrix() const ;

    void decrementer(double quantite_consomme) ;
};

#endif