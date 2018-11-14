#include <stdio.h>
#include <string.h>

#include "tp4.h"

int main(int argc, char* argv[]) {

  // Debug
  printf("argc = %d\n", argc);

  int z;
  for (z = 0 ; z <= argc ; z++) {
    printf("argv[%d] = %s\n", z, argv[z]);
  }
  // Fin debug

  if (argc == 2 && strcmp(argv[1], "-s") == 0) {
    printf("%s\n", saisie());
  }
  else if (argc == 3 && strcmp(argv[1], "-m") == 0 && argv[2][0] != '-') {
    printf("%s\n", miroir(argv[2]));
  }
  else {
    printf("mauvaise utilisation\n");
  }

  return 0;
}
