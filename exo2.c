#include <stdio.h>
#include "exo2.h"

// taille physique
#define MAX_T 100

int main (){
    // déclaration et initialisation
    int tab[MAX_T] = {0};

    // taille logique
    int n= 0;
    int temp;

    do {
        printf("nombre d'entiers à insérer ? : ");
        scanf("%d", &n);
    }while(n>MAX_T || n < 0);

    for (int i = 0; i < n ; ++i) {
        printf("Num %d ?: ", i+1);
        scanf("%d", &tab[i]);
    }

    // calculer la plus grande valeur


    return 0;

}