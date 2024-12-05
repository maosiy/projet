#include "Afficheur.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

Afficheur::Afficheur(double init_prix_litre) : litres(0),prix_litre(init_prix_litre),somme(0){}

void Afficheur::incrementer(double quantite){
    litres = litres + quantite;
    somme = litres * prix_litre;
}

void Afficheur::afficher(){
    cout << fixed << setprecision(2);
    cout << "Litres distribues :" << litres <<endl;
    cout << "Prix par litre : " << prix_litre << endl;
    cout << "Total a payer : " << somme <<endl;
}