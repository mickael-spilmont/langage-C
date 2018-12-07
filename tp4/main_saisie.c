#include <stdio.h>
#include <unistd.h>
#include <getopt.h>

#include "tp4.h"

int main(int argc, char* argv[]) {

  // Debug
  // printf("argc = %d\n", argc);
  //
  // int z;
  // for (z = 0 ; z <= argc ; z++) {
  //   printf("argv[%d] = %s\n", z, argv[z]);
  // }
  // Fin debug

  int f_saisie = 0;
  int f_miroir = 0;
  int f_erreur = 0;
  int options;

  while ((options = getopt(argc, argv, "sm")) != -1) {
    switch (options) {
    case 's':
      f_saisie = 1;
      break;
    case 'm':
      f_miroir = 1;
      break;
    default:
      f_erreur = 1;
    }
  }

  if (!f_erreur && f_miroir && f_saisie && argv[argc - 1][0] == '-') {
    printf("%s\n", miroir(saisie()));
  }
  else if (!f_erreur && f_saisie && argv[argc - 1][0] == '-') {
    printf("%s\n", saisie());
  }
  else if (!f_erreur && f_miroir && !f_saisie && argv[argc - 1][0] != '-') {
    printf("%s\n", miroir(argv[argc - 1]));
  }
  else {
    printf("mauvaise utilisation\n");
    return 1;
  }

  return 0;
}
