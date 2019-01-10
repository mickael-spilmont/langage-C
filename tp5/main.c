#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <getopt.h>

#include "tp5.h"

int main(int argc, char* argv[]) {
// Flag d'option
  int f_caractere = 0;
  int f_mot = 0;
  int f_ligne = 0;
  int f_erreur = 0;
  int option;

// Vérification des options
  while ((option = getopt(argc, argv, "cwl")) != -1) {
    switch (option) {
    case 'c':
      f_caractere = 1;
      break;
    case 'w':
      f_mot = 1;
      break;
    case 'l':
      f_ligne = 1;
    default:
      f_erreur = 1;
    }
  }

  if (f_erreur) {
    printf("Option(s) incorrecte !");
    exit (1);
  }

// On compte le nombre de fichiers à traiter
  int nbFichier = 0;
  int argcCopie = argc;

  while (argcCopie > 1 && argv[argcCopie - 1][0] != '-') {
    nbFichier++;
    argcCopie--;
  }

  // Compteurs
  // int totalCar = 0;
  // int totalMot = 0;
  // int TotalLig = 0;

  int car;
  int mot;
  int lig;

  printf("NbFichier = %d", nbFichier);
  while (nbFichier > 0) {
    int fd = open(argv[argc - 1 - nbFichier], O_RDONLY);

    if (fd == -1) {
      perror(argv[argc - 1]);
      exit(1);
    }

    traiter(fd, &car, &mot, &lig);
  }

  // // Descripteur de fichier
  // int fd;

  // if (argv[argc - 1][0] == '-') {
  //   traiter(0, &car, &mot, &lig);
  // }
  // else { 
  //   while (argc > 1 && argv[argc - 1][0] != '-') {
  //     fd = open(argv[argc - 1], O_RDONLY);

  //     if (fd == -1) {
  //       perror(argv[argc - 1]);
  //       exit(1);
  //     }

  //   // Appelle de la fonction de comptage
  //     traiter(fd, &car, &mot, &lig);

      

  //   // On déduit 1 de argc
  //     argc--;
  // }


// Affichage
  if (f_caractere)
    printf("Caracteres : %d", car);
  if (f_mot)
    printf("Mots : %d", mot);
  if (f_ligne)
    printf("Lignes : %d", lig);

  exit(0);
}
