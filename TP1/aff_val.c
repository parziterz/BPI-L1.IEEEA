/* syntax_error
* 6 Septembre 2024
* Équipe pédagogique BPI
* Exemple de manip I/O
*/

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions */

/* Fonction principale */
int main (void)
{
    int value1 = 0;
    int value2 = 0;

    printf("Entrez une première valeur entière :\n");
    assert(scanf("%d", &value1) == 1);
    printf("Entrez une deuxième valeur entière :\n");
    assert(scanf("%d", &value2) == 1);
    printf("La somme des deux valeurs entrées est : %d\n", value1 + value2);
    printf("La différence des deux valeurs entrées est : %d\n", value1 - value2);
    printf("Le produit des deux valeurs entrées est : %d\n", value1 * value2);
    if (value2 != 0)
        printf("Le quotient des deux valeurs entrées est : %f\n", (float)value1 / (float)value2);
    else
        printf("La deuxième valeur entrée est nulle, le quotient n'est pas disponible\n");
    printf("La moyenne des deux valeurs entrées est : %f\n", (float)(value1 + value2) / 2);
    return EXIT_SUCCESS;
}
