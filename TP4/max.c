/* max
 * 17 octobre 2024
 * Adrien Philibert
 * Calcul du maximum entre trois valeurs
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>

/* Déclarations des fonctions et des macros */
int max_if(int x, int y);
int max_op(int x, int y);

/* Fonction principale */

int main(void) {
    int a;
    int b;
    int c;
    int max1;
    int max2;

    printf("Entrez trois valeurs entières : ");
    if (scanf("%d%d%d", &a, &b, &c) != 3) {
        fprintf(stderr, "Input issue\n");
        return EXIT_FAILURE;
    }
    max1 = max_if(a, max_if(b, c));
    max2 = max_op(a, max_op(b, c));
    printf("Le maximum entre %d, %d et %d est %d (if...else)\n", a, b, c, max1);
    printf("Le maximum entre %d, %d et %d est %d (ternaire)\n", a, b, c, max2);
    return EXIT_SUCCESS;
}

/* Définitions des fonctions */
int max_if(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}

int max_op(int x, int y) {
    return (x > y) ? x : y;
}
