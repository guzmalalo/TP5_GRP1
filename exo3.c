#include <stdio.h>
#include "exo3.h"

#define LIN 3
#define COL 4

int main (){
    // Déclaration du tableau à deux dimensions
    int tab[LIN][COL]= {0};

    for (int i = 0; i < LIN; ++i) {
        for (int j = 0; j < COL; ++j) {
            printf("Rentrez la valeur %d, %d/n",i,j);
            scanf("%d", &tab[i][j]);
        }
    }




    return 0;
}
