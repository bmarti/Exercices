/*
 * Created by Baptiste on 16/02/2021.
 * Below exercises are extracted from the book 'Exercices en langage C++' by Claude Delannoy, Eyrolles
*/
#include "Utils/CharUtils.h"
#include "Chapters/Functions.h"
#include "Chapters/Pointers.h"

using std::cout;
using std::endl;

#define LOG(x) cout << x << endl;

/**
 * @details Insère une séparation et annonce le numéro de l'exercice suivant dans la console
 *
 * @param ExerciseNb Numéro de l'exercice à annoncer
 */
static void separator(int ExerciseNb) {
    LOG("\n*****************");
    cout << "Exercice " << ExerciseNb << " : " << endl;
    LOG("*****************\n");
}

static void separator(std::string phrase) {
    LOG("\n*****************");
    cout << phrase << " : " << endl;
    LOG("*****************\n");
}

/** @details Exercice 31 - Création d'une fonction en ligne effectuant une opération selon les paramètres en entrée.
    @param carac Opération attendue, a pour addition, s pour soustraction
    @param number Le nombre sur lequel effectué l'opération
    @returns Le résultat de l'opération
*/
inline int fctInline_exercice33(char carac, int number) {
    int res;
    if (carac == 'a') {
        res = number + carac;
    } else if (carac == 's') {
        res = number - carac;
    } else {
        res = number * carac;
    }
    return res;
}

int main() {

    Functions functions(1);

    separator(25);

    /**
       CHAPITRE 3 - LES FONCTIONS
     */

    /// Exercice 25
    {
        // Bonjour 1 fois
        functions.bonjourUnique();

        // Bonjour 1 fois
        functions.bonjourMultiples();

        // Bonjour 3 fois
        functions.setNbBonjour(3);
        functions.bonjourMultiples();
    }

    separator(27);

    /// Exercice 27
    {
        float somme, difference, produit, quotient;

        somme = functions.compute(5, 5, '+');
        difference = functions.compute(50, 260, '-');
        produit = functions.compute(25, 25, '*');
        quotient = functions.compute(5, 8, '/');

        string dif = ", différence : ";

        cout << "Somme : " << somme << toAscii(const_cast<char*>(dif.c_str())) << difference << ", produit : "
        << produit << ", quotient : " << quotient << endl;
    }

    separator(33);

    /// Exercice 33
    {
        int n = 150, p;
        char c = 's';
        p = fctInline_exercice33(c, n);

        cout << "fctInline_exercice33(\'" << c << "\', " << n << ") vaut : " << p << " car \'s\' vaut : " << (int) c << "." << endl;
    }

    /**
       CHAPITRE 4 - LES POINTEURS, TABLEAUX ET CHAINES DE STYLE C
     */

    Pointers pointer;

    separator(35);

    /** Exercice 35
     *  Ecrire de deux façons différentes un programme qui lit 10 nombres entiers dans un tableau avant d'en rechercher
     *  le plus grand et le plus petit.
     */
    {
        constexpr int NB_VALEURS = 5;
        int t[NB_VALEURS]{-112,-250,980,250,3};
        
        //for (int i = 0; i < NB_VALEURS; i++) std::cin >> t[i];

        pointer.formalismeTableau(t, NB_VALEURS);

        std::cout << std::endl; // séparation

        pointer.formalismePointeur(t, NB_VALEURS);
    }

    separator(36);

    /** Exercice 36
     *  Copier les nombres positifs inclues dans un tableau dans un autre tableau, compléter par des 0 sinon.
     */
    {
        constexpr int NB_VALEURS = 5;
        int tabRef[NB_VALEURS],
            tabCopie[NB_VALEURS];

        for (int i = 0; i < NB_VALEURS; i++) std::cin >> tabRef[i];

        pointer.onlyPos(tabRef, tabCopie, NB_VALEURS);
    }

    separator("Exercice sur les fonctions virtuelles");

    /**
     * Exercice sur les fonctions virtuelles
     * 
     */
    {



    }


    return 0;
}