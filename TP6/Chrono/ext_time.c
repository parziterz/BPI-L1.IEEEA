/* ext_time.c
 * 6 Septembre 2024
 * Équipe pédagogique BPI
 * fonctions additionnelles de manipulation des durées
 */

/* Appel des bibliothèques */
#include <assert.h>
#include "timeio.h"

void sub_1s(int *ph, int *pm, int *ps) {
  if (*ps == 0 && *pm == 0 && *ph == 0) {
    return;
  }
  (*ps)--;
  if (*ps < 0) {
    *ps = 59;
    (*pm)--;
    if (*pm < 0) {
      *pm = 59;
      (*ph)--;
      if (*ph < 0) {
        *ph = 0;
      }
    }
  }
}

bool time_is_zero(int h, int m, int s) {
  if (s == 0 && m == 0 && h == 0)
    return true;
  return false;
}
