#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

typedef struct personne {
    char name[100];
    int note ;
    struct personne *suivant ;
}personne;

typedef personne* Liste ;

int main() {
    printf("hello world\n");


    //creation des noeuds 
    Liste personne1=(Liste)malloc(sizeof(struct personne));
    Liste personne2= (Liste)malloc(sizeof(struct personne));
    ////
    strcpy(personne1->name ," Youssef");
    personne1->note=21 ;
    strcpy(personne2->name," ysf ");
    personne2->note=22 ;
    // laison entre les noeuds //
    personne1->suivant = personne2 ;
    personne2 -> suivant = NULL  ;
    // affichage //
    Liste courant = personne1 ;
    int k=1 ;
    while(courant!=NULL){
        printf("le nom de la personne %d est : %s  \n", k , courant->name) ;
        printf("la note  de la personne %d est : %d  \n", k , courant->note) ;
        courant = courant->suivant ;
        k++ ;
    }
    free(personne1);
    free(personne2);
    
    return 0;
    
}
