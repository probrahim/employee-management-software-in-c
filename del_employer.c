#include <stdio.h>
#include "shell.h"
#include <stdbool.h>


void del_employer(){
    int id;
    int v =  0;




    printf("entre matricule \t :");
    scanf("%d",&id);

    char filename[100];

    sprintf(filename, "employe_%d.txt",id);
    FILE *f = fopen(filename,"r");

    if (f == NULL){
        printf("non trouve");
    }
    else {

    }
    fclose(f);
}