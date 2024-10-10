/* eval-poly
 * 6 Septembre 2024
 * Équipe pédagogique BPI
 * Programme qui calcule la valeur d'un polynôme en un point donné
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions */

/* eval_poly:
 * Calcule la valeur d'un polynôme en un point donné
 * Entrée: un réel x de type double
 * Sortie: une valeur de type double
 * AE: Aucune
 * AS: eval_poly == 3 * x * x - 4 * x + 1
 */
double eval_poly(double x);

/* Fonction principale */
int main(void) {
  printf("Entrez une valeur réelle : ");
  double v;
  assert(scanf("%lf", &v) == 1);

  double r = eval_poly(v);
  printf("La valeur du polynome pour %lf est %lf.\n", v, r);

  return EXIT_SUCCESS;
}

/* Définitions des fonctions */

double eval_poly(double x) {
  double resultat;

  resultat = 3 * x * x - 4 * x + 1;

  return resultat;
}
