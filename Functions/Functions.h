//
// Created by Baptiste on 16/02/2021.
//

#ifndef CPP_FUNCTIONS_H
#define CPP_FUNCTIONS_H

#include <iostream>

class Functions {
public:
    // Constructors
    Functions(int nbBonjour);

    void bonjourUnique();
    void bonjourMultiples();

    int getNbBonjour() {return v_nbBonjour;}
    void setNbBonjour(int nbBonjour) {v_nbBonjour = nbBonjour;}
private:
    int v_nbBonjour {1};
};

#endif //CPP_FUNCTIONS_H
