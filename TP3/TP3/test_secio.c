/* time_to_sec
 * 4 Septembre 2024
 * Équipe pédagogique BPI
 * Lit sur l'entrée standard un nombre de seconde
 * et renvoie sur la sortie standard cette durée sous
 * la forme heure:minute:seconde
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "timeio.h"

/* Déclarations des fonctions */

/* Fonction principale */
int main(void) {
  int h, m, s;

  assert(scanf("%d:%d:%d", &h, &m, &s) == 3); 
  printf("%d second(s)\n", to_sec(h, m, s));
  return EXIT_SUCCESS;
}
