#include <stdio.h>

#include "tp3.h"

int main(void) {
  printf("Exercice 1\n");
  char chaine1[10] = "bonjour";
  printf("%d\n\n", mon_strlen(chaine1));

  printf("Exercice 2\n");
  char* chaine2 = "bonjour";
  printf("%d\n", mon_strlen_pointeur(chaine2));

  printf("Exercice 3\nMot 1 : ");
  char chaine3[100];
  scanf("%s", chaine3);
  printf("Mot 2 : ");
  char chaine4[100];
  scanf("%s", chaine4);
  printf("%d\n", mon_strcmp(chaine3, chaine4));

  printf("Exercice 3\n");

  return 0;
}
