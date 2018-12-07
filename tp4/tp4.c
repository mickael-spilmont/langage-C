#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tp4.h"

/* Retourne un pointeur sur une nouvelle chaîne contenant le miroir de la chaîne
passée en paramètre ou null si la mémoire n'a pas pus être alouée */
char *miroir(const char *s) {
  int length = strlen(s);
  char *resultat = calloc(length + 1, sizeof(char));
  if (resultat == NULL) {
    return resultat;
  }

  int i;
  for (i = length - 1; i >= 0; i--) {
    *resultat = s[i];
    resultat++;
  }
  *resultat = '\0';

  resultat = resultat - length;
  return resultat;
}

/* Permet la saisie d'une chaine de caratère de longeueur quelconque, et
retourne une chaine de caractères de même longeur ou NULL si la mémoire n'a pas
pu être allouée */
char* saisie() {
  int nbAlloue = 50;
  char* resultat = calloc(nbAlloue, sizeof(char));
  if (resultat == NULL) {
    return resultat;
  }

  int nbChar = 0;
  char caractere = getchar();
  while (!isspace(caractere)) {
    if (nbChar > nbAlloue-1) {
      nbAloue += 50;
      resultat = realloc(resultat, nbAloue * sizeof(char));
      if (resultat == NULL) {
        return resultat;
      }
    }

    resultat[nbChar] = caractere;
    nbChar++;
    caractere = getchar();
  }

  resultat[nbChar] = '\0';
  return resultat;
}
