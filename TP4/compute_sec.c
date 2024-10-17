/* compute_sec
 * 17 octobre 2024
 * Adrien Philibert
 * Descriptif du programme
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>

/* Déclarations des fonctions et des macros */
void add_1s(int *ph, int *pm, int *ps);
void sub_1s(int *ph, int *pm, int *ps);
void to_time(int d, int *h, int *m, int *s);

/* Fonction principale */

int main(void) {
    int h;
    int m;
    int s;
    int seconds;

    if (scanf("%d", &seconds) != 1 || seconds < 0)
        return EXIT_FAILURE;
    to_time(seconds, &h, &m, &s);
    printf("%02d:%02d:%02d\n", h, m, s);
    add_1s(&h, &m, &s);
    printf("%02d:%02d:%02d\n", h, m, s);
    sub_1s(&h, &m, &s);
    printf("%02d:%02d:%02d\n", h, m, s);
    return EXIT_SUCCESS;
}

/* Définitions des fonctions */
void add_1s(int *ph, int *pm, int *ps) {
    (*ps)++;
    if (*ps == 60) {
        *ps = 0;
        (*pm)++;
        if (*pm == 60) {
            *pm = 0;
            (*ph)++;
        }
    }
}

void sub_1s(int *ph, int *pm, int *ps) {
    (*ps)--;
    if (*ps < 0) {
        *ps = 59;
        (*pm)--;
        if (*pm < 0) {
            *pm = 59;
            (*ph)--;
            if (*ph < 0)
                *ph = 0;
        }
    }
}

void to_time(int d, int *h, int *m, int *s) {
  *h = d / 3600;
  *m = (d % 3600) / 60;
  *s = d % 60;
}
