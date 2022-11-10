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
void affiche(struct NombreRationnel input);


/**
 * Lecture d'un nombre rationnel
 * @return structure NombreRationnel (aka NomRat)
 */
NomRat lecture(void);


#endif //TP5_GRP1_EXO1_H
