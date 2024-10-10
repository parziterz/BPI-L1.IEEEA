/* time_to_sec_fun
 * 8 octobre 2024
 * Adrien Philibert
 * Descriptif du programme
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

/* Déclarations des fonctions et des macros */
int to_sec(int h, int m, int s);

/* Fonction principale */
int main(int ac, char **av)
{
    int h = 0;
    int m = 0;
    int s = 0;

    if (ac == 1) {
        printf("Entrez l'heure au format h:m:s : ");
        assert(scanf("%d:%d:%d", &h, &m, &s) == 3);
    } else if (ac >= 4) {
        h = atoi(av[1]);
        m = atoi(av[2]);
        s = atoi(av[3]);
    }
    assert(h >= 0 && h < 24);
    assert(m >= 0 && m < 60);
    assert(s >= 0 && s < 60);
    if (ac == 1 || ac == 4)
        printf("Total en secondes : %d\n", to_sec(h, m, s));
    else if (ac == 5 && strcmp(av[ac - 1], "-f") == 0)
        printf("%d", to_sec(h, m, s));
    return 0;
}

/* Définitions des fonctions */
int to_sec(int h, int m, int s)
{
    return h * 3600 + m * 60 + s;
}
