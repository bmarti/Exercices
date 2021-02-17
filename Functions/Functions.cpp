//
// Created by Baptiste on 16/02/2021.
//

#include "Functions.h"

using std::cout;
using std::endl;

Functions::Functions(int nbBonjour) : v_nbBonjour(nbBonjour) {}

void Functions::bonjourUnique() {
    cout << "Bonjour, une seule fois et ca suffit !" << endl;
}

void Functions::bonjourMultiples() {
    for (int i = 1; i<v_nbBonjour; i++)
    {
        cout << "C'est necessaire que je vous dise bonjour " << v_nbBonjour << " fois, courage, encore " << v_nbBonjour-i << " fois..." << endl;
    }

    cout << "C'est la derniere fois : Bonjour !" << endl << "J'ai enfin termine !" << endl;
}