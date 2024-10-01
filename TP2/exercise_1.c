/* exercice_1.c
 * 23 septembre 2024
 * Adrien Philibert
 * affiche chaque chiffre, précédé d'espaces.
 */

/* Appel des bibliothèques */
#include <stdio.h>

/* Déclarations des fonctions et des macros */


/* Fonction principale */
int main(void)
{
    for(int i = 1; i < 10; i++) {
        for (int j = 1 ; j < i; j++)
            printf(" ");
        printf("%d\n", i);
    }
    return 0;
}
