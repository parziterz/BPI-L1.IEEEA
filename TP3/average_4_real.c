/* average_4_real
 * 8 octobre 2024
 * Adrien Philibert
 * Calcule la moyenne de quatre valeurs réelles
 */

/* Appel des bibliothèques */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/* Déclarations des fonctions et des macros */
/* average:
 * Calcule la moyenne de quatre réels
 * Entrée: quatre réels de type double
 * Sortie: une valeur de type double
 * AE: Aucune
 * AS: eval_poly == 3 * x * x - 4 * x + 1
 */
double average(double val1, double val2, double val3, double val4);

/* Fonction principale */

int main(int ac, char **av)
{
    if (ac != 5) {
        write(2, "Usage: ./average val1 val2 val3 val4\n", 37);
        return EXIT_FAILURE;
    }
    printf("La moyenne des quatre valeurs est %.2f\n", average(atof(av[1]), atof(av[2]), atof(av[3]), atof(av[4])));
    return EXIT_SUCCESS;
}

/* Définitions des fonctions */

double average(double val1, double val2, double val3, double val4)
{
    return (val1 + val2 + val3 + val4) / 4;
}