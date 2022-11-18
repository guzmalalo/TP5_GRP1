#ifndef TP5_GRP1_EXO1_H
#define TP5_GRP1_EXO1_H

typedef struct NombreRationnel NomRat;

/**
 * Déclaration de la structure
 */
struct NombreRationnel {
    int num;
    int den;
};

/**
 * Déclaration de fonction d'affichage
 * @param input Une structure NombreRationnel
 */
void affiche(NomRat input);


/**
 * Lecture d'un nombre rationnel
 * @return structure NombreRationnel (aka NomRat)
 */
NomRat saisie(void);

/**
 * Multiplcation entre deux nombre rationnels a et b
 * @param a Structure NombreRationnel
 * @param b Structure NombreRationnel
 * @return c Structure NombreRationnel, résultat de a*b
 */
NomRat multiplication(NomRat a, NomRat b);


/**
 * Addition entre deux nombre rationnels a et b
 * @param a Structure NombreRationnel
 * @param b Structure NombreRationnel
 * @return c Structure NombreRationnel, résultat de a+b
 */
NomRat addition(NomRat a, NomRat b);


#endif //TP5_GRP1_EXO1_H
