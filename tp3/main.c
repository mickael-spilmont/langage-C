#include <stdio.h>

#include "tp3.h"

int main(void) {
  /*
  printf("Exercice 1\n");
  char chaine1[20] = "bonjour";
  printf("%s = %d\n\n", chaine1, mon_strlen(chaine1));

  printf("Exercice 2\n");
  char* chaine2 = "bonjour";
  printf("%s = %d\n", chaine2, mon_strlen_pointeur(chaine2));
*/
  printf("\nExercice 3\nMot 1 : ");
  char chaine3[100];
  scanf("%s", chaine3);
  printf("Mot 2 : ");
  char chaine4[100];
  scanf("%s", chaine4);
  printf("%d\n", mon_strcmp(chaine3, chaine4));

  printf("\nExercice 4\nNombre de characteres : ");
  int nbChar = 0;
  scanf("%d", &nbChar);
  printf("%d\n", mon_strcmp_n(chaine3, chaine4, nbChar));
/*
  printf("\nExercice 5\n");
  printf("Chaine 1 : %s\nChaine 2 : %s\n", chaine1, chaine2);
  printf("Concatenation : %s\n", mon_strcat(chaine1, chaine2));

  printf("\nExercice 6\nChaine %s\n", chaine2);
  printf("Trouvé : %s\n", mon_strchr(chaine2, 'r'));
*/
  // printf("\nExercice 7\n");
  char* haystack = "Ma supesuper chaine de caracteres";
  char* needle = "Max";
  // printf("Haystack : %s\nNeedle : %s\n", haystack, needle);
  // printf("%s\n", mon_strstr(haystack, needle));

  printf("\nExercice 8\n");
  printf("Haystack : %s\nNeedle : %s\n", haystack, needle);
  printf("réponse finale : %s\n", mon_strstr_v2(haystack, needle));

  return 0;
}
