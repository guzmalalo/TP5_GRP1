#include <stdio.h>
#include "exo2.h"


int main (){
    // déclaration et initialisation
    int tab[MAX_T] = {0};

    // taille logique
    int n= 0;
    int nMax = 0;

    do {
        printf("nombre d'entiers à insérer ? : ");
        scanf("%d", &n);
    }while(n>MAX_T || n < 0);

    // appel de procedure de saisie
    saisie(tab, n);

    // affiche le tableau
    affichage(tab, n);

    // calculer la plus grande valeur
    nMax = tab[0];

    for (int i = 0; i < n ; ++i) {

        if(tab[i] > nMax) {
            nMax = tab[i];
        }

    }

    // Affichage de la valeur max
    printf("La valeur max est %d ", nMax);


    return 0;

}

// définition procedure de saisie
void saisie(int tab[MAX_T], int n){

    for (int i = 0; i < n ; ++i) {
        printf("Num %d ?: ", i+1);
        scanf("%d", &tab[i]);
    }
}

// définition procedure de saisie
void affichage(int tab[MAX_T], int n){

    for (int i = 0; i < n ; ++i) {
        printf("%d ", tab[i]);
    }

    printf("\n");
}


