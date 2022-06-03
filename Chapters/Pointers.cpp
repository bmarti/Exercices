#include "Pointers.h"

void Pointers::formalismeTableau(int tab[], const int size) {
    int min, 
        max;

    min = max = tab[0];

    for (int i = 0; i < size; i++) {
        if (max < tab[i]) max = tab[i];
        if (min > tab[i]) min = tab[i];
    }
    std::cout << "Formalisme tableau :" << std::endl;
    std::cout << "Minimum : " << min << std::endl;
    std::cout << "Maximum : " << max << std::endl;
}

void Pointers::formalismePointeur(int tab[], const int size) {
    int min, 
        max;

    min = max = *tab;

    for (int i = 0; i < size; i++) {
        if (max < *(tab+i)) max = *(tab+i);
        if (min > *(tab+i)) min = *(tab+i);
    }
    std::cout << "Formalisme pointeur :" << std::endl;
    std::cout << "Minimum : " << min << std::endl;
    std::cout << "Maximum : " << max << std::endl;
}

void Pointers::onlyPos(int tabRef[], int tabCopie[], const int size) {
    if (tabRef != nullptr && size > 0) {
        std::cout << "[";
        for (int j = 0; j < size; j++) {
                (tabRef[j] > 0) ? tabCopie[j] = tabRef[j] : tabCopie[j] = 0;
                std::cout << " " << tabCopie[j] << ",";
        }
        std::cout << "]" << std::endl;
    }

}