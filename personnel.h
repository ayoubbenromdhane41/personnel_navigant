typedef
typedef struct{
    int jour;
    int mois;
    int annee;
}date;

typedef struct{
char membre[50];
char qualif[100];
date ddnl;
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
    int sexe[2];
}personnel; 

int ajouterpersonnel(char fperso[],personnel p);
int modifirpersonnel(char fperso,char mat[],personnel n);
int supppersonnel(char *fperso,char mat[]);
int ajouterl(char *flicence,licence l);
int supprimerl(char *flicence,char mem[]);
int rechercherpersonnel(char *fperso,personnel p,char nom[],char fon[],char batt[]);
int disponible(char *fperso,personnel p);
int recherchervol(char *vols,char *fperso,char poste[],date d);
int affecter(char *faffecter,char *fperso,char mat[]);
int 
