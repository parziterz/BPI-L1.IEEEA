/* sec_to_time_fun
 * 8 octobre 2024
 * Adrien Philibert
 * Convertis un nombre de secondes en heures, minutes et secondes
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <string.h>

/* Déclarations des fonctions et des macros */
void to_time(int duration, int *hours, int *minutes, int *seconds);
int error(const char *message);

/* Fonction principale */

int main(void)
{
    int d = 0;
    int h = 0;
    int m = 0;
    int s = 0;

    printf("Entrez une durée en secondes : ");
    if (scanf("%d", &d) != 1 || d < 0)
        return error("Invalid input\n");
    to_time(d, &h, &m, &s);
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}

/* Définitions des fonctions */
void to_time(int d, int *h, int *m, int *s)
{
    *h = d / 3600;
    *m = (d % 3600) / 60;
    *s = d % 60;
}

int error(const char *message)
{
    write(2, message, strlen(message));
    return 1;
}