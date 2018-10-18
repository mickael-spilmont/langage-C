#include <stdio.h>

#include "tp3.h"

// Compte le nombre de caractère dans une chaine
int mon_strlen(char s[]) {
  int i = 0;
  while (s[i] != '\0') {
    i++;
  }
  return i;
}

// Même fonction que la précédente mais utilise des pointeurs
int mon_strlen_pointeur(const char *s) {
  int i = 0;
  while (*s != '\0') {
    s++;
    i++;
  }
  return i;
}

// Compare lexicographiquement deux chaines de caractères, et retourne un nombre
// négatif si s1 est plus petite que s2, un nombre pausitif dans la cas
// contraire et 0 dans le cas de deux cahines identiques Attention, ne convertie
// pas les majuscules qui sont donc prise en compte !
int mon_strcmp(const char *s1, const char *s2) {
  while (*s1 == *s2 && *s1 && *s2) {
    s1++;
    s2++;
  }

  return *s1 - *s2;
}

// Même fonction que la précédente mais compare sur les n premiers caractères
int mon_strcmp_n(const char *s1, const char *s2, int n) {
  int i = 0;
  while (*s1 == *s2 && *s1 && *s2 && i < n) {
    i++;
    s1++;
    s2++;
  }

  return *s1 - *s2;
}

// Concataine deux chaine de caractères à condition que la chaine s1 soit
// suffisament grande, Attention aucun controlle n'est effectué !
char *mon_strcat(char *s1, const char *s2) {
  int tailleS1 = mon_strlen_pointeur(s1);
  char *origin = s1;
  s1 += tailleS1;

  while (*s2 != '\0') {
    *s1 = *s2;
    s1++;
    s2++;
  }

  return origin;
}

// Cherche un caractère dans la chaine, et retourne le reste de la chaine à
// partir du caratère si trouvé, retourne null dans le cas contraire
char *mon_strchr(char *s, int c) {
  while (*s != c && *s != '\0') {
    s++;
  }
  return s;
}

// Trouver une aiguille dans botte de foin, ou trouver une suite de caractères
// dans une chaine. Retourne la chaine à partir du shémat si trouvé, ou null si
// non trouvé
char *mon_strstr(char *haystack, char *needle) {
  char *needleOrigine = needle;

  // On compte le nombre de charactere de needle
  int needleTaille = 0;
  while (*needle != '\0') {
    needle++;
    needleTaille++;
  }

  // Compteur de lettres qui correspondent
  int i = 0;
  while (*haystack != '\0' && i < needleTaille) {
    printf("%d\n", i);

    // Cas 1 le caractère de haystack est le même que celui de needle
    if (*haystack == *needle) {
      needle++;
      i++;
    }
    // Cas 2 le caractère est différent mais un début de needle à été trouvé,
    // dans ce cas on remet le compteur à 0
    else if (i > 0) {
      needle = needleOrigine;
      haystack--;
      i = 0;
    }
    // Cas 3 le caractère est différent est aucun début de needle n'a été trouvé
    else {
      needle = needleOrigine;
      i = 0;
    }
    haystack++;
  }

  if (i == needleTaille) {
    haystack -= i;
  }
  return haystack;
}

// Fait la même chose que la fonction précédente mais en réutilisant les
// fonctions déja crées
char *mon_strstr_v2(char *haystack, char *needle) {
  char needleFirstLetter = *needle;
  int needleLenght = mon_strlen(needle);
  int resultat;

  while ((*haystack != '\0') && resultat != 0) {
    haystack = mon_strchr(haystack, needleFirstLetter);
    resultat = mon_strcmp_n(haystack, needle, needleLenght - 1);

    // Décalage permenttant d'avancer dans le haystack si le mot n'est pas
    // Trouvé
    if (resultat != 0) {
      haystack++;
    }
  }
  return haystack;
}
