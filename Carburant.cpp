#include "Carburant.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

Carburant::Carburant(string t, double q, double p) : type(t), quantite(q), prix(p) {}

string Carburant::getType() const {
        return type;
    }

double Carburant::getQuantite() const {
        return quantite;
    }

double Carburant::getPrix() const {
        return prix;
    }

void Carburant::decrementer(double quantite_consomme) {
        if (quantite_consomme <= quantite) {
            quantite -= quantite_consomme;
        } else {
            cout << "Quantite insuffisante dans la cuve !" << endl;
        }
    }