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

int mon_strcmp_n(const char* s1, const char* s2, int n) {
  int i = 0;
  while ( *s1 == *s2 && *s1 && *s2 && i < n) {
    i++;
    s1++;
    s2++;
  }

  return *s1 - *s2;
}

char *mon_strcat(char *s1, const char *s2) {
  int tailleS1 = mon_strlen_pointeur(s1);
  char* origin = s1;
  s1 += tailleS1;

  while (*s2 != '\0') {
    *s1 = *s2;
    s1++;
    s2++;
  }
  
  return origin;
}

char *mon_strchr(char *s, int c) {
  while (*s != c && *s != '\0') {
    s++;
  }
  return s;
}