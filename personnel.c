#include <stdio.h>
#include <string.h>
#include "personnel.h"



int ajouterpersonnel(char *fperso,personnel p){
FILE *f=NULL;
int r=0;
f=fopen(fperso,"a");
if(f!=NULL){
    fprintf(f,"%s %s %s %s %s %s %s %s %d %d %d %d\n",p.matricule,p.nom,p.prenom,p.fonction,p.base_attache,p.tel,p.mail,p.adresse,p.ddn.jour,p.ddn.mois,p.ddn.annee,p.sexe);
   r=1;
}
fclose(f);

return r;
}
int ajoutervols(char *fvols,vols v){
FILE *f=NULL;
int r=0;
f=fopen(fvols,"a");
if(f!=NULL){  
	fprintf(f,"%s\n",v.id_vol);
   	r=1;
}
fclose(f);

return r;
}
int modifirpersonnel(char *fperso,char mat[],personnel n){
int r=0;
personnel p;
FILE *f=fopen(fperso,"r");
FILE *g=fopen("tmp.txt","w");
if((f!=NULL)&&(g!=NULL)){
   while(fscanf(f,"%s %s %s %s %s %s %s %s %d %d %d %d",p.matricule,p.nom,p.prenom,p.fonction,p.base_attache,p.tel,p.mail,p.adresse,&p.ddn.jour,&p.ddn.mois,&p.ddn.annee,&p.sexe)!=EOF){
   	if(strcmp(p.matricule,mat)==0){
		r=1;
		fprintf(g,"%s %s %s %s %s %s %s %s %d %d %d %d\n",n.matricule,n.nom,n.prenom,n.fonction,n.base_attache,n.tel,n.mail,n.adresse,n.ddn.jour,n.ddn.mois,n.ddn.annee,n.sexe);
	
	}else{
		fprintf(g,"%s %s %s %s %s %s %s %s %d %d %d %d\n",p.matricule,p.nom,p.prenom,p.fonction,p.base_attache,p.tel,p.mail,p.adresse,p.ddn.jour,p.ddn.mois,p.ddn.annee,p.sexe);
		}
   }  
fclose(g);
fclose(f);
}
remove(fperso);
rename("tmp.txt",fperso);
return r;
}	

int supppersonnel(char *fperso,char mat[]){
personnel p;
int r=0;
FILE *f=fopen(fperso,"r");
FILE *g=fopen("tmp.txt","w");
if((f!=NULL)&&(g!=NULL)){
   while(fscanf(f,"%s %s %s %s %s %s %s %s %d %d %d %d",p.matricule,p.nom,p.prenom,p.fonction,p.base_attache,p.tel,p.mail,p.adresse,&p.ddn.jour,&p.ddn.mois,&p.ddn.annee,&p.sexe)!=EOF){
   	if(strcmp(p.matricule,mat)==0){
   		r=1;
   	}else{
		fprintf(g,"%s %s %s %s %s %s %s %s %d %d %d %d\n",p.matricule,p.nom,p.prenom,p.fonction,p.base_attache,p.tel,p.mail,p.adresse,p.ddn.jour,p.ddn.mois,p.ddn.annee,p.sexe);
		
	}
   }
  
}
fclose(f);
fclose(g); 
remove(fperso);
rename("tmp.txt",fperso);

return r;
}	


int ajouterl(char flicence[],licence l){
FILE *f=NULL;
int r=0;
f=fopen(flicence,"a");
if(f!=NULL){
   fprintf(f,"%s %s %d %d %d %d\n",l.membre,l.qualif,l.d.jour,l.d.mois,l.d.annee,l.alerte);
   r=1;
}
fclose(f);

return r;
}



int supprimerl(char flicence[],char mem[]){
licence l;
int r;
FILE *f=fopen(flicence,"r");
FILE *g=fopen("tmp.txt","w");
if((f!=NULL)&&(g!=NULL)){
   while(fscanf(f,"%s %s %d %d %d %d\n",l.membre,l.qualif,&l.d.jour,&l.d.mois,&l.d.annee,&l.alerte)!=EOF){
   	if(strcmp(l.membre,mem)==0){
   		r=1;
   	}else{
		fprintf(g,"%s %s %d %d %d %d\n",l.membre,l.qualif,l.d.jour,l.d.mois,l.d.annee,l.alerte);
		r=0;
	}
   }   
fclose(f);
fclose(g);   
}
remove(flicence);
rename("tmp.txt",flicence);

return r;
}	


personnel rechercherpersonnel(char fperso[],char nom[],char fon[],char batt[]){
personnel p;
int r;
FILE *f=fopen(fperso,"r");
if(f!=NULL){
   while((r==0)&&(fscanf(f,"%s %s %s %s %s %s %s %s %d %d %d %d",p.matricule,p.nom,p.prenom,p.fonction,p.base_attache,p.tel,p.mail,p.adresse,&p.ddn.jour,&p.ddn.mois,&p.ddn.annee,&p.sexe)!=EOF)){
       if((strcmp(p.nom,nom)==0)||(strcmp(p.fonction,fon)==0)||(strcmp(p.base_attache,batt)==0)){
       	r=1;
        }
   }
fclose(f);
if(r==0){

strcpy(p.matricule,"0");
}
}
return p;
}

avol recherchervol(char *avols ,char *faffecter,char *fvols,char poste[],date d){
   affectation a;
   avol av;
   vols v;
   int tp=1;
   FILE *vf=fopen(fvols, "r");
   FILE *vaf=fopen(avols, "w");
   FILE *af=fopen(faffecter, "r");
   if((vaf!=NULL)&&(vf!=NULL)){
        while (fscanf(vf, "%s ",v.id_vol)!=EOF){
        	av.pilote=1;
        	av.hotesse=1;
        	av.copilote=1;
        	FILE *af=fopen(faffecter, "r");
        if (af != NULL){
        while (fscanf(af, "%s %s %d %d %d %s",a.matricule, a.id_vol, &a.dd.jour, &a.dd.mois, &a.dd.annee,a.fonction)!=EOF){
        	if(strcmp(v.id_vol,a.id_vol)==0){
        		if((strcmp(a.fonction,"pilote")==0)){
        		     av.pilote=av.pilote-1;
        		}
        		if((strcmp(a.fonction,"hotesse")==0)){
        		     av.hotesse--;
        		}
        		if((strcmp(a.fonction,"copilote")==0)){
        		     av.copilote--;
        		}
        		strcpy(av.id_vol,a.id_vol);
        		av.dd.jour=d.jour;
        		av.dd.mois=d.mois;
        		av.dd.annee=d.annee;
        		fprintf(vaf,"%s %d %d %d %d %d %d\n",av.id_vol,av.dd.jour,av.dd.mois,av.dd.annee,av.pilote,av.hotesse,av.copilote);
        	
        }
        }
        }
        }
        
        fclose(vaf);
        fclose(af);
        }
        return av;   	
}


int affecter(char *faffecter,char *fperso,char mat[],char idvol[],date d){
   affectation a;
   personnel p;
   FILE *pf=fopen(fperso,"r");
   FILE *f=fopen(faffecter, "a");
   int r=0;
   
   if((f!=NULL)&&(pf!=NULL)){
   if(disponible(faffecter,mat,d)!=0){
   	return -1;
   	}
   	while(fscanf(pf,"%s %s %s %s %s %s %s %s %d %d %d %d",p.matricule,p.nom,p.prenom,p.fonction,p.base_attache,p.tel,p.mail,p.adresse,&p.ddn.jour,&p.ddn.mois,&p.ddn.annee,&p.sexe)!=EOF){
   	
   	if(strcmp(p.matricule,mat)==0){
   		strcpy(a.matricule,mat);
   		strcpy(a.id_vol,idvol);
   		a.dd.jour=d.jour;
   		a.dd.mois=d.mois;
   		a.dd.annee=d.annee;
   		strcpy(a.fonction,p.fonction);
   		fprintf(f,"%s %s %d %d %d %s\n",a.matricule,a.id_vol,a.dd.jour,a.dd.mois,a.dd.annee,a.fonction);
   		r=1;
   	}
   	
   
   
   }
   fclose(f);
}
return r;
}
int disponible(char *faffecter,char mat[],date d){
    affectation a;
    int dispo = 1;
    FILE *f = fopen(faffecter, "r");
    if (f != NULL){
        while (dispo == 1 && fscanf(f, "%s %s %d %d %d %s",
            a.matricule, a.id_vol, &a.dd.jour, &a.dd.mois, &a.dd.annee,a.fonction) !=EOF){
            if ((strcmp(a.matricule, mat) == 0 )&& (a.dd.jour == d.jour)
                && (a.dd.mois == d.mois) && (a.dd.annee == d.annee)){
                dispo = 0;
            }
        }
        fclose(f);
    }
    return dispo;
}





