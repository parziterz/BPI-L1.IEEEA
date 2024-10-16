/* sec_to_time
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
  int h;
  int m;
  int s;
  int seconds;

  if (scanf("%d", &seconds) != 1 || d < 0)
    return EXIT_FAILURE;
  to_time(seconds, &h, &m, &s);
  printf("%02d:%02d:%02d\n", h, m, s);
  ad_1s(&h, &m, &s);
  printf("%02d:%02d:%02d\n", h, m, s);
  return EXIT_SUCCESS;
}
