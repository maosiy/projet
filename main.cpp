#include "Pompe.hpp"
#include "Afficheur.hpp"
#include "Carburant.hpp"
#include "Pompe3carburants.hpp"

using namespace std;

int main() {
    // Question 1
    // Pompe pompe(1.5, "Sans Plomb 95", 100.0); 

    // pompe.choisir();

    // cout << "Entrez la quantite de carburant a servir (L) : ";
    // double quantite;
    // cin >> quantite;

    // pompe.servir(quantite);
    // pompe.facturer();

    // Question 2
    Carburant c1("Sans Plomb 95", 100.0, 1.5);
    Carburant c2("Diesel", 150.0, 1.3);
    Carburant c3("Ethanol", 80.0, 1.1);

    Pompe3carburants pompe3(c1,c2,c3);

    pompe3.afficherTousLesCarburants();

    cout << "Choisissez le carburant (1-3): ";
    int choix;
    cin >> choix;

    pompe3.choisir(choix);

    cout << "Entrez la quantite de carburant a servir (L) : ";
    double quantite;
    cin >> quantite;

    pompe3.servir(quantite);

    pompe3.facturer();

     return 0;
}