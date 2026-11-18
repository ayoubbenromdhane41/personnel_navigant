#ifndef PERSONNEL_H
#define PERSONNEL_H
 
#include <stdio.h>
#include <string.h>
typedef struct{
char id_vol[50];
}vols;
typedef struct{
    int jour;
    int mois;
    int annee;
}date;
typedef struct{
    char id_vol[50];
    date dd;
    int pilote;
    int hotesse;
    int copilote;
}avol;
typedef struct{
    char matricule[50];
    char id_vol[50];
    date dd;
    char fonction[50];
    
}affectation;


typedef struct{
char membre[50];
char qualif[100];
date d;
int alerte;
}licence;

typedef struct{
    char matricule[50];
    char nom[50];
    char prenom[50];
    char fonction[50];
    char base_attache[50];
    char tel[50];
    char mail[100];
    char adresse[100];
    date ddn;
    int sexe;
}personnel; 

int ajouterpersonnel(char *fperso,personnel p);
int modifirpersonnel(char *fperso,char mat[],personnel n);
int supppersonnel(char *fperso,char mat[]);
int ajouterl(char *flicence,licence l);
int supprimerl(char *flicence,char mem[]);
licence rechercherl(char *flicence,char mem[]);
personnel rechercherpersonnel(char *fperso,char nom[],char fon[],char batt[]);
int disponible(char *faffecter,char mat[],date d);
avol recherchervol(char *avols ,char *faffecter,char *fvols,char poste[],date d);
int affecter(char *faffecter,char *fperso,char mat[],char idvol[],date d);
int ajoutervols(char *fvols,vols v);
int matricule_existe(char fperso[], char mat[]);
#endif
