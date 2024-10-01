
/* sec_to_time
 * 26 septembre 2024
 * Adrien Philibert
 * convertir une durée en secondes en heures, minutes et secondes
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */


/* Fonction principale */
int main(void)
{
    int d = 0;
    int h = 0;
    int m = 0;
    int s = 0;

    printf("Entrez une durée en secondes : ");
    assert(scanf("%d", &d) == 1);
    assert(d >= 0);
    h = d / 3600;
    m = (d % 3600) / 60;
    s = d % 60;
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}

/* Définitions des fonctions */
