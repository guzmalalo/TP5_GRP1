#include <stdio.h>
#include "exo3.h"

#define LIN 2
#define COL 2

int main (){
    // Déclaration du tableau à deux dimensions
    int tab2D[LIN][COL] = {0};
    int tab1D[LIN*COL] = {0};
    int compteur = 0;

    // remplissage
    for (int i = 0; i < LIN; ++i) {
        for (int j = 0; j < COL ; ++j) {
            printf("Rentrez la valeur %d, %d :", i,j);
            scanf("%d", &tab2D[i][j]);
        }
        printf("\n");
    }

    // affichage
    for (int i = 0; i < LIN; ++i) {
        for (int j = 0; j < COL ; ++j) {
            printf("%d ", tab2D[i][j]);
        }
        printf("\n");
    }

    // Transformation
    for (int i = 0; i < LIN; ++i) {
        for (int j = 0; j < COL; ++j) {
            tab1D[compteur] =  tab2D[i][j];
            compteur++;
        }
    }

    // Affichage du tableau 1D
    for (int i = 0; i < LIN*COL; ++i) {
        printf("%d ", tab1D[i]);
    }

    return 0;
}
