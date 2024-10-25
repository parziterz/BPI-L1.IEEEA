
/* moyenne
 * 23 octobre 2024
 * Adrien Philibert
 * Calcul de la moyenne de deux semestres (exercice 1)
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

/* Déclarations des fonctions et des macros */
/* lire_notes : lit l'ensemble des notes des eu des deux semestres
 * Entrée : un tableau de double notes[2][5]
 * Sortie : int
 * AE : notes[2][5] contient des notes valides
 * AS : 0 si les notes sont valides, -1 sinon
 */
int lire_notes(double notes[2][5]);

/* calcul_moyenne : calcule les moyennes des deux semestres
 * Entrée : un tableau de double notes[2][5], un tableau de double moyennes[4]
 * Sortie : void
 * AE : notes[2][5] contient des notes valides
 * AS : moyennes[4] contient les moyennes des ue
 */
void calcul_moyenne(double notes[2][5], double *moyennes);

/* check_resultat : vérifie si l'étudiant est admis en seconde année
 * Entrée : un tableau de double moyennes[4]
 * Sortie : void
 * AE : moyennes[4] contient les moyennes des ue
 * AS : affiche le résultat de l'admission
 */
void check_resultat(double *moyennes);

/* Fonction principale */
int main(void) {
    double notes[2][5];
    double moyennes[4];

    if (lire_notes(notes) == -1) {
        return EXIT_FAILURE;
    }
    calcul_moyenne(notes, moyennes);
    check_resultat(moyennes);
    return EXIT_SUCCESS;
}

/* Définitions des fonctions */
int lire_notes(double notes[2][5]) {
    for (int semestre = 0; semestre < 2; semestre++) {
        printf("Entrer notes du semestre %d:\n", semestre + 1);
        for (int ue = 0; ue < 5; ue++) {
            printf("UE %d: ", ue + 1);
            assert(scanf("%lf", &notes[semestre][ue]) == 1);
            if (notes[semestre][ue] < 0 || notes[semestre][ue] > 20) {
                fprintf(stderr, "Note invalide\n");
                return -1;
            }
        }
    }
    return 0;
}

void calcul_moyenne(double notes[2][5], double *moyennes) {
    double somme_disci[2] = {0, 0};
    double somme_ens[2] = {0, 0};

    for (int semestre = 0; semestre < 2; semestre++) {
        for (int ue = 0; ue < 5; ue++) {
            somme_ens[semestre] += notes[semestre][ue];
            if (ue < 3) {
                somme_disci[semestre] += notes[semestre][ue];
            }
        }
        moyennes[semestre * 2] = somme_disci[semestre] / 3.0;
        moyennes[semestre * 2 + 1] = somme_ens[semestre] / 5.0;
    }
}

void check_resultat(double *moyennes) {
    bool s1_valide = false;
    bool s2_valide = false;

    if (moyennes[0] >= 10 && moyennes[1] >= 10) {
        s1_valide = true;
    }
    if (moyennes[2] >= 10 && moyennes[3] >= 10) {
        s2_valide = true;
    }
    if (s1_valide && s2_valide) {
        printf("Admis en seconde année.\n");
    } else if (s1_valide || s2_valide) {
        printf("Non-admis mais semestre %s validé.\n", s1_valide ? "1" : "2");
    } else {
        printf("Aucun semestre obtenu.\n");
    }
}
