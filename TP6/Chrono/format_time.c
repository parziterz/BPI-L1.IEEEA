/* format_time.c
 * 6 Septembre 2024
 * Équipe pédagogique BPI
 * fonctions d'affichage et de lecture
 */

/* Appel des bibliothèques */
#include <assert.h>
#include <stdio.h>
#include "timeio.h"

void print_time(int h, int m, int s) {
  assert(h >= 0);
  assert(m >= 0 && m < 60);
  assert(s >= 0 && s < 60);

  printf("%02d:%02d:%02d\n",h,m,s);
}

int scan_time(int *ph, int *pm, int *ps) {
  int r = scanf("%d :%d :%d", ph, pm, ps);
  if (r < 3) {
    return r;
  }
  if (*ph < 0) {
    --r;
  }
  if (*pm <  0 || *pm >= 60) {
    --r;
  }
  if (*ps < 0 || *ps >= 60) {
    --r;
  }
  return r;
}
