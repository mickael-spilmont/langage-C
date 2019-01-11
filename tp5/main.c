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
  int fichierMultiple = 0;

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
      break;
    default:
      f_erreur = 1;
    }
  }

// On vérifie si aucune option n'est passée, auquel cas on les passe tous sur true
  if (!f_caractere && !f_mot && !f_ligne) {
    f_caractere = 1;
    f_mot = 1;
    f_ligne = 1;
  }

  if (f_erreur) {
    exit (1);
  }

// On compte le nombre de fichiers à traiter
  int nbFichier = 0;
  int argcCopie = argc;

  while (argcCopie > 1 && argv[argcCopie - 1][0] != '-') {
    nbFichier++;
    argcCopie--;
  }

// Si on à plus d'un fichier on passe fichier multiple à true
  if (nbFichier > 1)
    fichierMultiple = 1;

  // Compteurs
  int totalCar = 0;
  int totalMot = 0;
  int TotalLig = 0;

  int car;
  int mot;
  int lig;

  while (nbFichier > 0) {
    int fd = open(argv[argc - nbFichier], O_RDONLY);

    if (fd == -1) {
      perror(argv[argc - 1]);
      exit(1);
    }

    car = 0;
    mot = 0;
    lig = 0;

    traiter(fd, &car, &mot, &lig);

    // On met à jour les totaux
    totalCar += car;
    totalMot += mot;
    TotalLig += lig;

    // Affichage
    if (f_caractere)
      printf("Caracteres : %d --> %s\n", car, argv[argc - nbFichier]);
    if (f_mot)
      printf("Mots : %d --> %s\n", mot, argv[argc - nbFichier]);
    if (f_ligne)
      printf("Lignes : %d --> %s\n", lig, argv[argc - nbFichier]);

    nbFichier --;
  }

  // Si on a plusieur fichier on affiche le total
  if (fichierMultiple ) {
    printf("\n\n");
    if (f_caractere)
      printf("Caracteres : %d --> Total\n", totalCar);
    if (f_mot)
      printf("Mots : %d --> Total\n", totalMot);
    if (f_ligne)
      printf("Lignes : %d --> Total\n", totalCar);
  }

  exit(0);
}
