/* puissance.c
 * 24 Septembre 2024
 * Équipe pédagogique BPI
 * Exemple de boucle
 * ex 1 tp 6
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Déclarations des fonctions et des macros */
#define DEBUG
#define STEP 1000000

int main(void) {
  int x;
  if (scanf("%d", &x) != 1) {
    printf("Erreur de saisie\n");
    return EXIT_FAILURE;
  }

  int v = 1;
  /* Invariant de boucle:
   * 1 <= k && k <= x && v == 2^k
   * (les entiers k ont été affichés si DEBUG n'est pas défini)
   */
  for (int k = 1; k <= x; ++k) {
    v = 2 * v;
    /* En mode DEBUG
     * affiche la progression du calcul
     */
    #ifdef DEBUG
      if (k % STEP == 0) {
        printf("%d", k);
        fflush(stdout); // vide le buffer pour actualiser l'affichage
        sleep(1); // pause de 1 seconde
        printf("\r"); // retourne au début de la ligne
      }
    #endif
  }
  printf("\nLe résultat du calcul est %d\n", v);

  return EXIT_SUCCESS;
}

/* Définitions des fonctions */
