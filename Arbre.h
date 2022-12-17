#ifndef ARBRE_H_
#define ARBRE_H_
    /**
     * @struct : 
     *    struct arb : structure possedant une cle(type int), un fils gauche(< cle) et un fils gauche(>=cle)
     *    Arbre : pointeur vers un struct arb
     * @fn : fonctions
     *  -> rechercher(Arbre,int) : cherche un entier passer en parametre et le retourne, au cas echeant retourne -1
     *  -> inserer(Arbre*, int) : Ajouter un nouveau noeud dans un arbre
     *  -> afficher(Arbre, int) : Afficher toutes les cles de l'arbre dans l'ordre croissant
     *  -> nbreFeuille(Arbre) : retourne le nombre de feuille de l'arbre
     *  -> nbreNoeud(Arbre) : retourne le nombre de noeud d'un arbre
     * NB: Lors de la declaration d'un arbre, il est neccessaire de l'initialiser a NULL 
    */
    #include <stdio.h>
    #include <stdlib.h>

    typedef struct arb{
        int cle;
        struct arb *gauche;
        struct arb *droite;
    }*Arbre;

    extern int rechercher(Arbre,int);

    extern void inserer(Arbre*,int);
    
    extern void afficher(Arbre);

    extern int nbreFeuille(Arbre);

    extern int nbreNoeud(Arbre);

#endif