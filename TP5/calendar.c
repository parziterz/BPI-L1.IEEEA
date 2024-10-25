/* calendar
 * 23 octobre 2024
 * Adrien Philibert
 * Descriptif du programme (exercice 2)
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Déclarations des fonctions et des macros */
/* est_bissextile : détermine si une année donée en paramètre est bissextile
 * Entrée : un entier a
 * Sortie : bool
 * AE : a >= -45
 * AS : true si a est bissextile, false sinon
 */
bool est_bissextile(int a);

/* nbjours : détermine le nombre de jours d'un mois donné en paramètre en
 * fonction de l'année
 * Entrée : deux entiers m et a
 * Sortie : int
 * AE : 1 <= m <= 12
 * AS : le nombre de jours du mois m de l'année a
 */
int nbjours(int m, int a);

/* Fonction principale */
int main(void) {
    int a = 0;
    int m = 0;

    printf("Entrez un mois (1 -> 12) et une année : ");
    if (scanf("%d%d", &m, &a) != 2 || (m < 1 || m > 12)) {
        return EXIT_FAILURE;
    }
    printf("L'année donnée est %sbissextile\n",
        est_bissextile(a) ? "" : "non ");
    printf("Le mois %d de l'année %d a %d jours\n", m, a, nbjours(m, a));
    return EXIT_SUCCESS;
}

/* Définitions des fonctions */
bool est_bissextile(int a) {
    if (a < -45) {
        return false;
    } else if (a >= -45 && a <= -9) {
        return (a % 3 == 0);
    } else if (a > -9 && a < 4) {
        return false;
    } else {
        if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) {
            return true;
        }
        return false;
    }
}

int nbjours(int m, int a) {
    if (m == 2) {
        if (est_bissextile(a) == true) {
            return 29;
        }
        return 28;
    }
    if (m == 10 && a == 1582) {
        return 21;
    }
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;
    }
    return 31;
}
