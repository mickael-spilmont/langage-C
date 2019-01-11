#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "tp5.h"

int traiter (int fd, int *car, int *mot, int *lig) {
  int nbOctet;
  char caractere = 0;
  int dansUnMot = 0;
  char buffer[80] = {0};

  while ((nbOctet = read(fd, buffer, 80)) > 0) {;
    int i;
    for (i = 0 ; i < nbOctet ; i++) {
      caractere = buffer[i];
      *car += 1;

      if (isspace(caractere))
        dansUnMot = 0;
      else if (dansUnMot == 0) {
        *mot += 1;
        dansUnMot = 1;
      }

      if (caractere == '\n')
        *lig += 1;
    }
  }

  close(fd);

  if (nbOctet < 0)
    return 1;

  return 0;
}
