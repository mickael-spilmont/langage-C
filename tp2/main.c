#include <stdio.h>

#include "tp2.h"

int main(void){
  int monTableau[5] = {1, 2, 3, 4, 5};

  afficher(monTableau, 5);
  printf("%d\n", somme(monTableau, 5));

  return 0;
}
