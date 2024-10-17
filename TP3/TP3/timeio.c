/* timeio.c
 * 6 Septembre 2024
 * Équipe pédagogique BPI
 * Prototypes des fonctions de la bibliothèque timeio
 */ 
 
/* Appel des bibliothèques */
#include <assert.h>
#include <limits.h>
#include "timeio.h"

// Écrire ici les définitions des fonctions
/* to_time : 
 * convertit une durée en seconde et la modifie au format hh:mm:ss
 * entrée : 1 entier d, 3 pointeurs d'entier h, m, s
 * sortie : aucune
 * AE : d >= 0
 * AS : *h = d / 3600 && *m = (d % 3600) / 60 && *s = d % 60
 */
void to_time(int d, int *h, int *m, int *s) {
  *h = d / 3600;
  *m = (d % 3600) / 60;
  *s = d % 60;
}

/* to_sec : 
 * convertit une durée au format hh:mm:ss en secondes
 * entrée : 3 entiers h, m, s
 * sortie : entier
 * AE : 0 >= h <= 24 && 0 >= m < 60 && 0 >= s < 60
 * AS : h * 3600 + m * 60 + s
 */
int to_sec(int h, int m, int s) {
  return h * 3600 + m * 60 + s;
}

/* ad_1s : 
 * ajoute une seconde à une durée au format hh:mm:ss
 * entrée : 3 pointeurs sur entier h, m, s
 * sortie : aucune
 * AE : 0 >= h <= 24 && 0 >= m < 60 && 0 >= s < 60
 * AS : ps + 1
 */
void ad_1s(int *ph, int *pm, int *ps) {
  ++*ps;
  if (*ps == 60) {
    *ps = 0;
    ++*pm;
    if (*pm == 60) {
      *pm = 0;
      ++*ph;
    }
  }
}
