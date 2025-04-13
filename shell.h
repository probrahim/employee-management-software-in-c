#ifndef SHELL_H
#define SHELL_H


typedef struct {
    int id;
    char nom[50];
    char prenom[50];
    float s;

} Employer;



void make_employer();
void edit_employer();


#endif

