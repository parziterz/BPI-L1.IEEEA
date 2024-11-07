/* timeio.h
 * 6 Septembre 2024
 * Équipe pédagogique BPI
 * Prototypes des fonctions de la bibliothèque timeio
 */

#ifndef TIMEIO_H
#define TIMEIO_H

#include <stdbool.h>

/* to_time
 * Prend en paramètre un  entier de type int
 * contenant une durée exprimée en seconde.
 * La fonction converti cette durée en heure : minute : seconde
 * et stocke les trois valeurs dans les adresses de type int *
 * passées en paramètre.
 * Entrée: t de type int, ph, pm et ps de type int *.
 * Sortie: void
 * AE: t >= 0
 * AS: h:m:s est l'écriture de t sous forme heure : minute : seconde
 *     && *ph == p && *pm == m && *ps == s.
 */
void to_time(int t, int *ph, int *pm, int *ps);

/* to_seconds
 * Prend en paramètre trois entiers de type int
 * représentant une durée exprimée sous la
 * forme << heure : minute : seconde >>.
 * Elle calcule et renvoie la valeur en de cette durée
 * expriméee en seconde
 * Entrée: h, m et s trois entiers de type int
 * Sortie: une valeur de type int
 * AE: h m s représente une valeur horaire correcte &&
 *     la durée obtenue est stockable dans une variable
 *     de type int
 * AS: to_seconds == la durée h:m:s exprimée en secondes
 */
int to_seconds(int h, int m, int s);

/* add_1s
 * Prend en paramètre trois pointeurs vers des
 * variables de type int représentant une durée
 * sous la forme heure : minute : seconde
 * Modifie les variables pointées en ajoutant
 * une seconde
 * Entrée: ph, pm et ps de type int *
 * Sortie: Aucune
 * AE: !(*ph == INT_MAX && *pm == 59 && *ps == 59) &&
 *     (*ph >= 0) && ( *pm >=0 ) && (*ps >=0) &&
 *     (*pm <= 59) && (*ps <= 59)
 * AS: La valeur de *ph : *pm : *ps est l'écriture de la durée
 *     old(*ph) : old(*pm) : old(*s) augmentée de une seconde
 */
void add_1s(int *ph, int *pm, int *ps);

/* scan_time
 * Prend en paramètre trois pointeurs vers des entiers
 * et leur affecte des valeurs saisies par l'utilisateur.
 * Ces valeurs correspondent à une durée écrite sous la forme
 * heure : minute : seconde. La fonction renvoie le nombre de valeurs
 * correctement saisies
 * Entrée:  ph, pm et ps de type int *.
 * Sortie: int
 * AE: ph, pm, ps correspondent à des adresses valides
 * AS: (*ph, *pm et *ps sont correctement saisies && scan_time == 3)
 *    ^^ scan_time < 3
 */
int scan_time(int *ph, int *pm, int *ps);

/* print_time
 * Prend en paramètre trois entiers correspondant à une durée écrite
 * sous la forme
 * heure : minute : seconde et les affiches à l'écran.
 * Entrée:  h, m et s de type int.
 * Sortie: void
 * AE: h  m, s correspondent à des adresses valides
 * AS: h : m : s est affiché à l'écran
 */
void print_time(int h, int m, int s);

/* sub_1s
 * Prend en paramètre trois pointeurs vers des
 * variables de type int représentant une durée
 * sous la forme heure : minute : seconde
 * Modifie les variables pointées en enlevant
 * une seconde
 * Entrée: ph, pm et ps de type int *
 * Sortie: Aucune
 * AE: !(*ph == 0 && *pm == 0 && *ps == 0) &&
 *     (*ph >= 0) && ( *pm >=0 ) && (*ps >=0) &&
 *     (*pm <= 59) && (*ps <= 59)&&
 *     les adresses ph, pm et ps sont valides
 * AS: La valeur de *ph:*pm:*ps est l'écriture de la durée
 *     old(*ph):old(*pm):old(*s) diminuée de une seconde
 */
void sub_1s(int *ph, int *pm, int *ps);

/* time_is_zero
 * renvoie vraie si les trois paramètres entiers sont égaux à 0 et false sinon
 * Entrée: h, m et s trois entiers
 * Sortie: bool
 * AE: Aucune
 * AS: time_is_zero == (h ==0 && m == 0 && s == 0)
 */
bool time_is_zero(int h, int m, int s) ;

#endif // TIMEIO_H

