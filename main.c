#include <stdio.h>
#include <stdlib.h>
#include "Arbre.h"
// static int lenght = 0;
// void enTableau(Arbre a, int *tab){
//     if(a!=NULL){
//         enTanleau(a->gauche,tab);
//         tab[lenght++] = a->cle;
//         enTanleau(a->droite,tab);
//     }
// }

int main(){
    Arbre a = NULL;
    inserer(&a,4);
    inserer(&a,14);
    inserer(&a,2);
    inserer(&a,-7);
    inserer(&a,6);
    inserer(&a,20);
    inserer(&a,3);
    afficher(a);
    printf("FIN\n");
    printf("nbre Noeud : %d\n",nbreNoeud(a));
    printf("nbre feuille : %d\n",nbreFeuille(a));
    // int tab2[20];
    // enTableau(a,tab2);
    // for (int i = 0; i < lenght; i++)
    // {
    //     printf("[ %d ]->",*(tab2 + i));
    // }
    // printf("\n");

    return 0;
}