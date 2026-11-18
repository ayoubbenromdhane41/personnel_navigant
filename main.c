#include <stdio.h>
#include <string.h>
#include "personnel.h"
int main(){
    personnel p;
    personnel n;
    personnel p3;
    avol av;
    date d;
    d.jour=19;
    d.mois=11;
    d.annee=2026;
    licence l;
    licence l3;
    int r,i;
    strcpy(p.matricule, "M007");
    strcpy(p.nom, "youssef");
    strcpy(p.prenom, "d");
    strcpy(p.fonction, "pilote");
    strcpy(p.base_attache, "tunis");
    strcpy(p.tel, "20311456");
    strcpy(p.mail, "alibfgc@gmail.com");
    strcpy(p.adresse, "Tunis");
    p.ddn.jour = 2;
    p.ddn.mois = 07;
    p.ddn.annee = 1999;
    p.sexe=1;
    
    r= ajouterpersonnel("perso.txt", p);
    printf("%d",r);
    //r = modifirpersonnel("perso.txt", "M005", p);
    strcpy(n.matricule, "M007");
    strcpy(n.nom, "ayoub");
    strcpy(n.prenom, "Ben");
    strcpy(n.fonction, "copilote");
    strcpy(n.base_attache, "unis");
    strcpy(n.tel, "3456");
    strcpy(n.mail, "yousef@mail.com");
    strcpy(n.adresse, "Tunis");
    n.ddn.jour = 17;
    n.ddn.mois = 4;
    n.ddn.annee = 1999;
    n.sexe= 0;
    //r = supppersonnel("perso.txt", "M007");
    //r = modifirpersonnel("perso.txt", "M005", n);
    //p3=rechercherpersonnel("perso.txt","ayoub","c","libya");
   /* if(strcmp(p3.matricule,"0")==0){
    	printf("introvable");
    }
    else {
    printf("trouve : %s %s\n", p3.matricule, p3.nom);
}*/
    licence l1={"youssef","chef",10,1,1909,4};
    licence l2={"rayen","chefpppp",1,10,1910,5};
    //i=ajouterl("flicence.txt",l1);
    //i=ajouterl("flicence.txt",l2);
   //i=supprimerl("flicence.txt","ayoub");
     //l3=rechercherl("flicence.txt","rayen");
     if(strcmp(l3.membre,"0")==0){
    	printf("introvable");
    }
    else {
    printf("trouve : %s\n", l3.membre);
    }
    //r=affecter("affectes.txt","perso.txt","M005","V0010",d);
    printf("%d",r);
    av=recherchervol("avol.txt","affectes.txt","fvols.txt","pilote",d);
    vols v={"V002"};
    //r=ajoutervols("fvols.txt",v);
    return 0;
    
}
