#include "Pompe.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

Pompe::Pompe(double prix_carb, string type_carb, double quantite_carb) : afficheur(prix_carb), cuve(type_carb, quantite_carb, prix_carb) {}

void Pompe::choisir() {
        cout << "Vous avez choisi le carburant: " << cuve.getType() << endl;
    }

void Pompe::servir(double quantite) {
        if (quantite <= cuve.getQuantite()) {
            cuve.decrementer(quantite);
            afficheur.incrementer(quantite);
        } else {
            cout << "Quantite insuffisante pour servir cette demande." << endl;
        }
    }

void Pompe::facturer() {
        afficheur.afficher();
    }