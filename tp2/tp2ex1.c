#include <stdio.h>

#include "tp2ex1.h"

void afficher(int liste[], int taille) {
  int i;
  for (i = 0 ; i < taille ; i++){
    printf("%d ; ", liste[i]);
  }
  printf("\n");
}

int somme (int liste[], int taille) {
  int somme = 0;

  int i;
  for (i = 0 ; i < taille ; i++) {
    somme += liste[i];
  }
  return somme;
}

void copie_dans(int dest[], int src[], int taille) {
  int i;
  for (i = 0 ; i < taille ; i++) {
    dest[i] = src[i];
  }
}

void ajoute_apres(int dest[], int taille_dest, int src[], int taille_src) {
  int i;
  for (i = 0 ; i < taille_src ; i++) {
    dest[taille_dest] = src[i];
    taille_dest ++;
  }
}
