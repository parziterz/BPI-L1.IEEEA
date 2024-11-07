/* factorielle.c
 * 5 novembre 2024
 * Adrien Philibert
 * Calcule et affiche la factorielle d'un entier saisi par l'utilisateur
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>

/* Déclarations des fonctions et des macros */

/* fact:
 * calcule et renvoie la factorielle de l'entier passé en paramètre
 * Entrée: n de type int
 * Sortie: un type int
 * AE: n >= 0 && n <= 12
 * AS: factionelle de n
 */
int fact(int nb);

/* Fonction principale */

int main(void) {
  int n;

  printf("Entrez un entier entre 0 et 12: ");
  assert(scanf("%d", &n) == 1);
  if (n < 0 || n > 12) {
    return EXIT_FAILURE;
  }
  printf("La factorielle de %d est %d\n", n, fact(n));
  return EXIT_SUCCESS;
}

/* Définitions des fonctions */

int fact(int k) {
  int f = 1;

  /* Invariant de boucle :
   * 0 <= k && k <= n && f == k!
   */
  for (int i = 1; i < (k + 1); i++) {
    f *= i;
  }
  return f;
}
