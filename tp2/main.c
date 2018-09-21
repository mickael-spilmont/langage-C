#include <stdio.h>

#include "tp2.h"

int main(void){
  int monTableau[5] = {1, 2, 3, 4, 5};

  printf("Question 1 :\n");
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
  return 0;
}
