#include <stdio.h>
#include "shell.h"

void edit_employer() {
    int id;
    printf("=============== > Entrez l'ID de l'employé à modifier : ");
    scanf("%d", &id);

    char filename[100];
    sprintf(filename, "employe_%d.txt", id);

    printf("----  Ouverture de fichier %s  :  ", filename);

    FILE *f = fopen(filename, "r");
    if (f == NULL) {
        printf("\nErreur : Fichier %s non trouvé.\n", filename);
        return;
    } else {
        printf("Fichier %s ouvert avec succès.\n", filename);
    }

    Employer d;
    if (fscanf(f, "%d %s %s %f", &d.id, d.nom, d.prenom, &d.s) != 4) {
        printf("Erreur lors de la lecture des données.\n");
        fclose(f);
        return;
    }

    fclose(f);

    if (remove(filename) != 0) {
        printf("Erreur lors de la suppression de %s.\n", filename);
        return;
    } else {
        printf("Fichier %s supprimé avec succès.\n", filename);
    }

    f = fopen(filename, "w");
    if (f == NULL) {
        printf("Erreur d'ouverture de %s en mode écriture.\n", filename);
        return;
    } else {
        printf("Fichier %s ouvert en écriture avec succès.\n", filename);
    }
    puts("\t nouvelle input \t :");
    printf("Entrez Nom : ");
    scanf("%s", d.nom);
    printf("Entrez Prenom : ");
    scanf("%s", d.prenom);
    printf("Entrez salaire : ");
    scanf("%f", &d.s);

}
