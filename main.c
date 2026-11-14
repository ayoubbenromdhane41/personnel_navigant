#include <stdio.h>
#include <string.h>
#include "personnel.h"
void main(){
    personnel p;
    personnel n;
    int r;
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
    p.sexe[0] = 1;
    p.sexe[1] = 0;
    //char msg[100];
    
    //r = ajouterpersonnel("personnel.txt", p);
    strcpy(n.matricule, "M001");
    strcpy(n.nom, "Ahmed");
    strcpy(n.prenom, "Ben");
    strcpy(n.fonction, "Pilote");
    strcpy(n.base_attache, "Tunis");
    strcpy(n.tel, "20123456");
    strcpy(n.mail, "ahmed@mail.com");
    strcpy(n.adresse, "Tuis");
    n.ddn.jour = 12;
    n.ddn.mois = 5;
    n.ddn.annee = 1990;
    n.sexe[0] = 1;
    n.sexe[1] = 0;
    r = supppersonnel("personnel.txt", "M003");
    r = modifirpersonnel("personnel.txt", "M001", n);
    //printf("ajout M001      : %d (attendu 1)\n", r);
}
