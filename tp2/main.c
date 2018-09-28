#include <stdio.h>

#include "tp2ex1.h"
#include "tp2ex2.h"

int main(void){
  int monTableau[5] = {1, 2, 3, 4, 5};

  printf("Exercice 1\nQuestion 1 :\n");
  afficher(monTableau, 5);

  printf("Question 2 :\n");
  printf("La somme du tableau est %d\n\n", somme(monTableau, 5));

  printf("Question 3 :\n");
  int tableauDest[5];
  copie_dans(tableauDest, monTableau, 5);
  afficher(tableauDest, 5);

  printf("Question 4 :\n");
  int tableauDest2[10] = {-4, -3, -2, -1, 0};
  ajoute_apres(tableauDest2, 4 ,monTableau, 5);
  afficher(tableauDest2, 10);

  printf("Exercice 2\nQuestion 1 :\n");
  Rationnel fraction1 = {2, 8};
  Rationnel fraction2 = {7, 14};

  Rationnel fraction3 = rationnel_produit(fraction1, fraction2);

  printf("%d/%d * %d/%d = %d/%d\n\n", fraction1.num,fraction1.den, fraction2.num,
    fraction2.den, fraction3.num, fraction3.den);

  printf("Question 2 :\n");
  Rationnel fraction4 = rationnel_somme(fraction1, fraction2);

  printf("%d/%d + %d/%d = %d/%d\n\n", fraction1.num,fraction1.den, fraction2.num,
    fraction2.den, fraction4.num, fraction4.den);
  
  printf("Question 3 :\n");
  Rationnel fraction5 = {0, 0};
  Rationnel liste[] = {fraction1, fraction2, fraction3, fraction4, fraction5};
  
  Rationnel fraction6 = rationnel_plus_petit(liste);
  printf("Le plus petit rationnel est : %d/%d\n", fraction6.num, fraction6.den);

  return 0;
}
