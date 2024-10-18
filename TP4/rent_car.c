
/* rent_car
 * 17 octobre 2024
 * Adrien Philibert
 * Comparaison de deux formule de tarif de location de voiture (ex 3)
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */
/* compute_tariff1 : calcule le coût de la location avec la première formule
 * Entrée : un double p1 et deux entiers km et days
 * Sortie : double
 * AE : p1 est un double positif, km et days sont des entiers positifs
 * AS : cost = 80 * days || cost = 80 * days + (km - (500 * days)) * p1
 */
double compute_tariff1(double p1, int km, int days);

/* compute_tariff2 : calcule le coût de la location avec la seconde formule
 * Entrée : un double p2 et un entier km
 * Sortie : double
 * AE : p2 est un double positif, km est un entier positif
 * AS : cost = km * p2 || cost = 2000 * p2 + (km - 2000) * p2 * (1 - 0.115)
 */
double compute_tariff2(double p2, int km);

/* Fonction principale */
int main(void) {
  double p1;
  double p2;
  int km;
  int days;
  double cost1;
  double cost2;

  printf("Entrez le prix p1 (prix au kilomètre pour le premier tarif) : ");
  assert(scanf("%lf", &p1) == 1 && p1 >= 0);
  printf("Entrez le prix p2 (prix au kilomètre pour le second tarif) : ");
  assert(scanf("%lf", &p2) == 1 && p2 >= 0);
  printf("Entrez le nombre de kilomètres : ");
  assert(scanf("%d", &km) == 1 && km >= 0);
  printf("Entrez le nombre de jours : ");
  assert(scanf("%d", &days) == 1 && days > 0);
  cost1 = compute_tariff1(p1, km, days);
  cost2 = compute_tariff2(p2, km);
  if (cost1 < cost2) {
    printf("Le tarif 1 est le plus avantageux (%.2f€).\n", cost1);
  } else {
    printf("Le tarif 2 est le plus avantageux (%.2f€).\n", cost2);
  }
  return EXIT_SUCCESS;
}

/* Définitions des fonctions */
double compute_tariff1(double p1, int km, int days) {
  double cost = 80.0 * days;

  if (km > (500 * days)) {
    cost += (km - (500 * days)) * p1;
  }
  return cost;
}

double compute_tariff2(double p2, int km) {
  double cost;

  if (km <= 2000) {
    cost = km * p2;
  } else {
    cost = 2000 * p2 + (km - 2000) * p2 * (1 - 0.115);
  }
  return cost;
}
