/* boucle.c
 * 24 Septembre 2024
 * Équipe pédagogique BPI
 * Exemple de boucle
 * ex 1 tp 6
 */

/* Appel des bibliothèques */

#include <stdio.h>
#include <stdlib.h>

/* Déclarations des fonctions */

int main(void) {
/* Invariant de boucle :
 * 0 <= k && k <= 10 && les entiers de 0 à 9 ont été affichés
 */
  for (int k = 0; k < 10; ++k ) {
    printf("%d\n", k);
  }
  return EXIT_SUCCESS;
}

/* Définitions des fonctions */
