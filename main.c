#include <stdio.h>
#include <string.h>
#include "personnel.h"
int main(){
    personnel p;
    personnel n;
    personnel p3;
    avol av;
    date d;
    d.jour=1;
    d.mois=10;
    d.annee=1900;
    licence l;
    int r,i;
    strcpy(p.matricule, "M0020");
    strcpy(p.nom, "Ayoub");
    strcpy(p.prenom, "Benyy");
    strcpy(p.fonction, "copilote");
    strcpy(p.base_attache, "libya");
    strcpy(p.tel, "20123456");
    strcpy(p.mail, "ali@mail.com");
    strcpy(p.adresse, "Tunis");
    p.ddn.jour = 12;
    p.ddn.mois = 5;
    p.ddn.annee = 1990;
    p.sexe = 1;
    
    //r= ajouterpersonnel("perso.txt", p);
    
    strcpy(n.matricule, "M0012");
    strcpy(n.nom, "youssef");
    strcpy(n.prenom, "Ben");
    strcpy(n.fonction, "ilote");
    strcpy(n.base_attache, "unis");
    strcpy(n.tel, "3456");
    strcpy(n.mail, "yousef@mail.com");
    strcpy(n.adresse, "Tunis");
    n.ddn.jour = 17;
    n.ddn.mois = 4;
    n.ddn.annee = 1999;
    n.sexe= 0;
    //r = supppersonnel("perso.txt", "M0020");
    //r = modifirpersonnel("perso.txt", "M007", n);
    //p3=rechercherpersonnel("perso.txt","ayoub","c","libya");
    if(strcmp(p3.matricule,"0")==0){
    	printf("introvable");
    }
    else {
    printf("trouve : %s %s\n", p3.matricule, p3.nom);
}
    licence l1={"ayoub","chef",10,1,1909,4};
    licence l2={"ahmed","chefp",1,10,1910,5};
    //i=ajouterl("flicence.txt",l1);
    //i=ajouterl("flicence.txt",l2);
   // i=supprimerl("flicence.txt","ahmed");
    //r=affecter("affecter.txt","perso.txt","M001","V0010",d);
    av=recherchervol("avol.txt","affecter.txt","fvols.txt","pilote",d);
    vols v={"V002"};
    //r=ajoutervols("fvols.txt",v);
    return 0;
    
}
