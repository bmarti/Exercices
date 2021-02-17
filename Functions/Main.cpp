//
// Created by Baptiste on 16/02/2021.
//
#include "Functions.h"

using std::cout;
using std::endl;

int main(void) {
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

    return 0;
}