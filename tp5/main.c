#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <getopt.h>

// int main(int argc, char* argv[]) {
int main() {
  int fd = open("fichier.txt", O_RDONLY);

  if (fd == -1) {
      perror("fichier.tx");
      printf("Ouverture du fichier impossible !");
      exit(1);
  }

  char buffer[80];
  
  while (read(fd, buffer, 80) > 0) {
      printf("%s", buffer);
  }

  close(fd);
  exit(0);
}
