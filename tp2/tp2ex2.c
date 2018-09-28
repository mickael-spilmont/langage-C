#include <stdio.h>

#include "tp2ex2.h"

Rationnel rationnel_produit(Rationnel n1, Rationnel n2) {
    Rationnel resultat;

    resultat.den = n1.den * n2.den;
    resultat.num = n1.num * n2.num;

    return resultat;
}

Rationnel rationnel_somme(Rationnel n1, Rationnel n2) {
    Rationnel resultat;

    resultat.den = n1.den * n2.den;
    resultat.num = n1.num * n2.den + n2.num * n1.den;

    return resultat;
}

Rationnel rationnel_plus_petit(Rationnel liste[]) {
    Rationnel minimum = liste[0];

    int i = 1;
    while (liste[i].den != 0) {

        if (minimum.num / minimum.den > liste[i].num / liste[i].den) {
            minimum = liste[i];
        }
        
        i++;
    }
    return minimum;
}