/* time_to_sec
 * 23 septembre 2024
 * Adrien Philibert
 * convertir une heure en secondes
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

    printf("Entrez l'heure au format h:m:s : ");
    assert(scanf("%d:%d:%d", &h, &m, &s) == 3);
    assert(h >= 0 && h < 24);
    assert(m >= 0 && m < 60);
    assert(s >= 0 && s < 60);
    d = h * 3600 + m * 60 + s;
    printf("Total en secondes : %d\n", d);
    return 0;
}
