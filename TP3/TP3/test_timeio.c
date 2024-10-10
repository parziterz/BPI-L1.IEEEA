/* sec_to_time_fun
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
  int seconds;
  assert(scanf("%d", &seconds) == 1); 

  int h, m, s;
  to_time(seconds, &h, &m, &s);
  printf("%02d:%02d:%02d\n", h, m, s);
  
  return EXIT_SUCCESS;
}
