/* tools_time.c
 * 6 Septembre 2024
 * Équipe pédagogique BPI
 * fonctions de manipulation des durées
 */

/* Appel des bibliothèques */
#include <assert.h>
#include <limits.h>
#include "timeio.h"

int to_seconds(int h, int m, int s) {
  return h + m + s;
}

void to_time(int t, int *ph, int *pm, int *ps) {
  assert(t >= 0);
  *ph = t / (60 * 60) % 24;
  *pm = (t / 60) % 60;
  *ps = t % 60;
}

void add_1s(int *ph, int *pm, int *ps) {
  assert(!(*ph == INT_MAX && *pm == 59 && *ps == 59));
  assert(*ph >= 0 && *pm >=0 && *ps >=0 && *pm <= 59 && *ps <= 59);

  if (*ps < 59) {
    *ps += 1;
  } else {
    *ps = 0;
    if (*pm < 59) {
      *pm += 1;
    } else {
      *pm = 0;
      *ph += 1;
    }
  }
}
