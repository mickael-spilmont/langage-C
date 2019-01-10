#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tp5.h"

int traiter (int fd, int *car, int *mot, int *lig) {
  int nbOctet;
  char caractere = 0;
  char buffer[80] = {0};

  while (nbOctet = read(fd, buffer, 80) > 0) {
      int i;
      for (i = 0 ; i < nbOctet ; i++) {
        car++;

        if (isspace(buffer[i])) && !isspace
      }
  }

  close(fd);
  return 0;
}
