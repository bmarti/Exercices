//
// Created by Baptiste on 16/02/2021.
//
#include "Functions.h"
#include <locale>

using std::cout;
using std::endl;

int main(void) {
    // Encodage de la locale
    setlocale(LC_CTYPE, "fra");

    Functions functions(1);

    /**
     * Exercice 25
     */
    // Bonjour 1 fois
    functions.bonjourUnique();

    // Bonjour 1 fois
    functions.bonjourMultiples();

    // Bonjour 3 fois
    functions.setNbBonjour(3);
    functions.bonjourMultiples();

    /**
     * Exercice 27
     */
    float somme, difference, produit, quotient;

    somme = functions.compute(5, 5, '+');
    difference = functions.compute(50, 260, '-');
    produit = functions.compute(25, 25, '*');
    quotient = functions.compute(5, 8, '/');

    cout << "Somme : " << somme << ", différence : " << difference << ", produit : " << produit << ", quotient : " << quotient << endl;

    return 0;
}