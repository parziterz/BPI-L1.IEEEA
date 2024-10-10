/* syntax_error
* 6 Septembre 2024
* Équipe pédagogique BPI
* à corriger!
*/

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions */

/* Fonction principale */
int main (void)
{
    int p = 0;
    int q = 0;
    float x = 0.0;
    float y = 0.0;

    assert(scanf("%d", &p) == 1);
    assert(scanf("%d", &q) == 1);
    assert(scanf("%f", &x) == 1);
    y = (float)p * x / (float)q;
    printf("%f\n", y);
    return EXIT_SUCCESS;
}
