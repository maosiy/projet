#include "Pompe3carburants.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

Pompe3carburants::Pompe3carburants(Carburant c1, Carburant c2, Carburant c3): afficheur(0), carburants{c1, c2, c3}, carburant_actuel(-1){}

void Pompe3carburants::afficherTousLesCarburants() const {
        cout << "Carburants disponibles : " <<endl;
        for (int i = 0; i < 3; ++i) {
            cout << i + 1 << ". " << carburants[i].getType()
                 << " (Prix: " << carburants[i].getPrix()
                 << " EUR/L, Quantite: " << carburants[i].getQuantite() << " L" << endl;
        }
    }

void Pompe3carburants::choisir(int choix) {
        if (choix < 1 || choix > 3) {
            cout << "Choix invalide !" << endl;
            return;
        }
        carburant_actuel = choix - 1;
        afficheur = Afficheur(carburants[carburant_actuel].getPrix());
        cout << "Vous avez choisi le carburant: " << carburants[carburant_actuel].getType() << endl;
    }

void Pompe3carburants::servir(double quantite) {
        if (quantite <= carburants[carburant_actuel].getQuantite()) {
            carburants[carburant_actuel].decrementer(quantite);
            afficheur.incrementer(quantite);
        } else {
            cout << "Quantite insuffisante pour servir cette demande." << endl;
        }
    }

void Pompe3carburants::facturer() {
        afficheur.afficher();
    }


