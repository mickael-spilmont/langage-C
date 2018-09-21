#include <stdio.h>

#include "tp2.h"

void afficher(int liste[], int taille){
  int i;
  for (i = 0 ; i < taille ; i++){
    printf("%d\n", liste[i]);
  }
}

int somme (int liste[], int taille){
  int somme = 0;

  int i;
  for (i = 0 ; i < taille ; i++){
    somme += liste[i];
  }
  return somme;
}
