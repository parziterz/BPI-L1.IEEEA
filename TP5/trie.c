/* trie
 * 23 octobre 2024
 * Adrien Philibert
 * Tri de trois entiers (exercice 3)
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>

/* Déclarations des fonctions et des macros */
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
void trie(int *pa, int *pb);
//#define NDEBUG
#ifndef NDEBUG
#define TRIE(x,y) { \
trie(x,y); \
printf("a=%d b=%d c=%d\n", a, b, c); \
}
#else
#define TRIE(x,y) trie(x,y)
#endif // NDEBUG

/* Fonction principale */
int main(void) {
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Entrez trois entiers : ");
    if (scanf("%d%d%d", &a, &b, &c) != 3) {
        return EXIT_FAILURE;
    }
    printf("L'ordre croissant de ces valeurs est : %d %d %d\n",
        MIN(MIN(a, b), c), MIN(MAX(a, b), c), MAX(MAX(a, b), c));
    return EXIT_SUCCESS;
}

/* Définitions des fonctions */
void trie(int *pa, int *pb) {
    int tmp;

    if (*pa > *pb) {
        tmp = *pa;
        *pa = *pb;
        *pb = tmp;
    }
}