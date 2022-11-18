#include <stdio.h>
#include "exo1.h"


int main()
{
    printf("Rentrez n1 \n");
    NomRat n1 = saisie();

    printf("Rentrez n2 \n");
    NomRat n2 = saisie();
    NomRat res;

    // operations *
    res = multiplication(n1,n2);

    // affichage
    affiche(n1);
    printf(" * ");
    affiche(n2);
    printf(" = ");
    affiche(res);
    printf("\n");

    // operations +
    res = addition(n1,n2);

    // affichage
    affiche(n1);
    printf(" + ");
    affiche(n2);
    printf(" = ");
    affiche(res);

    return 0;
}


void affiche(NomRat input){
    printf("%d/%d", input.num, input.den);
}


NomRat saisie(void){
    NomRat temp;
    // initialisation
    printf("Rentrez le numérateur : ");
    scanf("%d", &temp.num);
    printf("Rentrez le dénominateur : ");
    scanf("%d", &temp.den);

    return temp;
}

// définition de la focntion multiplication
NomRat multiplication(NomRat a, NomRat b){
    NomRat c;

    c.num = a.num * b.num;
    c.den = a.den * b.den;

    return c;
}

// définition de la focntion multiplication
NomRat addition(NomRat a, NomRat b){
    NomRat c;
    c.num = a.num*b.den + b.num*a.den;

    c.den = a.den * b.den;

    return c;
}
