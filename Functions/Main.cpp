//
// Created by Baptiste on 16/02/2021.
//
#include "../Utils/CharUtils.h"
#include "Functions.h"

using std::cout;
using std::endl;

static void separator(int ExerciseNb) {
    cout << "\n*****************" << endl;
    cout << "Exercice " << ExerciseNb << " : " << endl;
    cout << "*****************\n" << endl;
}

inline int fctInline_exercice33(char c, int n) {
    int res;
    if (c == 'a') {
        res = n + c;
    } else if (c == 's') {
        res = n - c;
    } else {
        res = n * c;
    }
    return res;
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

    separator(33);

    /**
     * Exercice 33
     */

    int n = 150, p;
    char c = 's';
    p = fctInline_exercice33(c, n);

    cout << "fctInline_exercice33(\'" << c << "\', " << n << ") vaut : " << p << " car \'s\' vaut : " << (int) c << "." << endl;

    return 0;
}