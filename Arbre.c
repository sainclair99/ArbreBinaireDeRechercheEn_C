#include "Arbre.h"

/**
 * @brief[Methode permettant d'ajouter un noeud a un arbre]
*/
void inserer(Arbre *a, int elt){
    if((*a)==NULL){
        (*a) = (Arbre)malloc(sizeof(Arbre));
        (*a)->cle = elt;
        (*a)->droite = (*a)->gauche = NULL;
    }else if ((*a)->cle <= elt){
        inserer(&((*a)->droite),elt);
    }else
        inserer(&((*a)->gauche),elt);
}

/**
 * @brief[Afficher les elements d'un arbre dans l'ordre croissant]
*/
void afficher(Arbre a){
    if(a!=NULL){
        afficher(a->gauche);
        printf("{%d}->",a->cle);
        afficher(a->droite);
    }
}

/**
 * Rechercher un element dans l'arbre et le retourne s'il existe.
 * Retourner -1 au cas contraire
*/
int rechercher(Arbre a,int elt){
    if(a!=NULL){
        if (a->cle==elt)
            return a->cle;
        else if (a->cle<elt)
            return rechercher(a->droite,elt);
        else if (a->cle>elt)
            return rechercher(a->gauche,elt);
    }
    return -1;
}

/**
 * retourne le nombre de feuille d'un arbre.
 * NB: Une feuille est un noeud n'ayant pas de fils
*/
int nbreFeuille(Arbre a){
    return (a == NULL) ? 0 : (a->droite==NULL && a->gauche==NULL) ? 1 : nbreFeuille(a->droite)+nbreFeuille(a->gauche);
}

/**
 * retourne le nombre de noeud de l'arbre.
 * NB: Il s'agit du nombre d'element de l'arbre.
*/
int nbreNoeud(Arbre a){
    return (a == NULL) ? 0 : 1+nbreNoeud(a->droite)+nbreNoeud(a->gauche);
}
