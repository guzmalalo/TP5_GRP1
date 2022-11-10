#include <stdio.h>
#include "exo1.h"


int main()
{
    NomRat n1 = lecture();
    NomRat n2 = lecture();

    affiche(n1);
    affiche(n2);

    return 0;
}


void affiche(NomRat input){
    printf("Le nr est %d/%d \n", input.num, input.den);
}


NomRat lecture(void){
    NomRat temp;
    printf("Rentrez le num et le den : ");
    scanf("%d %d", &temp.num, &temp.den );

    return temp;
}

