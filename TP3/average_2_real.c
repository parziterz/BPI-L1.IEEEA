/* average_2_real
 * 8 octobre 2024
 * Adrien Philibert
 * Calcule la moyenne de deux valeurs réelles
 */

/* Appel des bibliothèques */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/* Déclarations des fonctions et des macros */
/* average:
 * Calcule la moyenne de deux réels
 * Entrée: deux réels de type float
 * Sortie: une valeur de type float
 * AE: Aucune
 * AS: eval_poly == 3 * x * x - 4 * x + 1
 */
float average(float val1, float val2);

/* Fonction principale */

int main(int ac, char **av)
{
    float val1 = 0;
    float val2 = 0;
    float moy;

    if (ac != 3) {
        write(2, "Usage: ./average val1 val2\n", 27);
        return EXIT_FAILURE;
    }
    return (int)average(atof(av[1]), atof(av[2]));
}

/* Définitions des fonctions */

float average(float val1, float val2)
{
    return (val1 + val2) / 2;
}