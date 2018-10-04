#include <stdio.h>

#include "tp3.h"

int mon_strlen(char s[]) {
  int i = 0;
  while ( s[i] != '\0' ) {
    i++;
  }
  return i;
}

int mon_strlen_pointeur(const char *s) {
  int i = 0;
  while ( *s != '\0') {
    s++;
    i++;
  }
  return i;
}

int mon_strcmp(const char * s1, const char * s2) {
  while ( *s1 == *s2 && *s1 && *s2 ) {
    s1++;
    s2++;
  }

  return *s1 - *s2;
}
