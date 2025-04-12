#include <stdio.h>
#include "shell.h"



void make_employer(){
    Employer n;
    printf("entrer vore identite :");
    scanf("%d",&n.id);
    printf("inserer le nom :");
    scanf("%s",n.nom);
    printf("inserer le prenom :");
    scanf("%s",n.prenom);
    printf("inserer salaire :");
    scanf("%f",&n.s);

    printf("voila votre nom : %s \t voila votre prenom   : %s",n.nom,n.prenom);
    

}