//
// Created by Baptiste on 16/02/2021.
//
#include "../Utils/CharUtils.h"
#include "Functions.h"

using std::cout;
using std::endl;

static void separator(int Exercisenb) {
    cout << "\n*****************" << endl;
    cout << "Exercice " << Exercisenb << " : " << endl;
    cout << "*****************\n" << endl;
}

int main(void) {

    Functions functions(1);

    separator(25);

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

    separator(27);

    /**
     * Exercice 27
     */
    float somme, difference, produit, quotient;

    somme = functions.compute(5, 5, '+');
    difference = functions.compute(50, 260, '-');
    produit = functions.compute(25, 25, '*');
    quotient = functions.compute(5, 8, '/');

    string dif = ", différence : ";

    cout << "Somme : " << somme << toAscii(const_cast<char*>(dif.c_str())) << difference << ", produit : " << produit << ", quotient : " << quotient << endl;

    return 0;
}