/* main.c
 * 4 Septembre 2024
 * Équipe pédagogique BPI
 * Fonctions principales du programme qui execute un chronometre
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <unistd.h>
#include "timeio.h"

/* Déclarations des fonctions */

/* Fonction principale */
int main(void) {
  int h, m, s;

  printf("Entrez une durée sous la forme heure:minute:seconde: ");
  if (scan_time(&h, &m, &s) < 3) {
    printf("Erreur de saisie\n");
    return EXIT_FAILURE;
  }
  /* Invariant de boucle :
   * h >= 0 && m >= 0 && s >= 0
   */
  while (!time_is_zero(h, m, s)) {
    print_time(h, m, s);
    sleep(1);
    sub_1s(&h, &m, &s);
  }
  return EXIT_SUCCESS;
}
