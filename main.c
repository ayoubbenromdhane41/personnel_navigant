#include <stdio.h>
#include <string.h>
#include "personnel.h"
int main(){
    personnel p;
    strcpy(p.matricule, "M001");
    strcpy(p.nom, "Ali");
    strcpy(p.prenom, "Ben");
    strcpy(p.fonction, "Pilote");
    strcpy(p.base_attache, "Tunis");
    strcpy(p.tel, "20123456");
    strcpy(p.mail, "ali@mail.com");
    strcpy(p.adresse, "Tunis");
    p.ddn.jour = 12;
    p.ddn.mois = 5;
    p.ddn.annee = 1990;
    p.sexe = 1;
    
    //char msg[100];
    int r;
    r = ajouterpersonnel("personnel.txt", p);
    printf("ajout M001      : %d (attendu 1)\n", r);
    return 0;
}
