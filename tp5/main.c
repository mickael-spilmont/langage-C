#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <getopt.h>

#include "tp5.c"

// int main(int argc, char* argv[]) {
int main() {
  int car = 0;
  int mot = 0;
  int lig = 0;

  int fd = open("fichier.txt", O_RDONLY);

  if (fd == -1) {
      perror("fichier.tx");
      printf("Ouverture du fichier impossible !");
      exit(1);
  }

  traiter(fd, &car, &mot, &lig);

  exit(0);
}
