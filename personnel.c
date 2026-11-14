int ajouterpersonnel(char fperso[],personnel p){
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

int modifirpersonnel(char fperso[],char mat[],personnel n){
int r=-1;
personnel p;
FILE *f=fopen(fperso,"r");
FILE *g=fopen("tmp.txt","w");
if((f!=NULL)&&(g!=NULL)){
   while(fscanf(f,"%s %s %s %s %s %s %s %s %d %d %d %d",n.matricule,n.nom,n.prenom,n.fonction,n.base_attache,n.tel,n.mail,n.adresse,&n.ddn.jour,&n.ddn.mois,&n.ddn.annee,&n.sexe)!=EOF){
   	if(strcmp(n.matricule,mat)==0){
		fprintf(g,"%s %s %s %s %s %s %s %s %d %d %d %d\n",p.matricule,p.nom,p.prenom,p.fonction,p.base_attache,p.tel,p.mail,p.adresse,p.ddn.jour,p.ddn.mois,p.ddn.annee,p.sexe);
		r=0;
	}else{
		fprintf(f,"%s %s %s %s %s %s %s %s %d %d %d %d\n",n.matricule,n.nom,n.prenom,n.fonction,n.base_attache,n.tel,n.mail,n.adresse,n.ddn.jour,n.ddn.mois,n.ddn.annee,n.sexe)
	}
   }  
fclose(g);
fclose(f);
}
remove(fperso);
rename("tmp.txt",fperso);
return r;
}	

int supppersonnel(char fperso[],char mat[]){
personnel p;
int r=-1;
FILE *f=fopen(fperso,"r");
FILE *g=fopen("tmp.txt","w");
if((f!=NULL)&&(g!=NULL)){
   while(fscanf(f,"%s %s %s %s %s %s %s %s %d %d %d %d",p.matricule,p.nom,p.prenom,p.fonction,p.base_attache,p.tel,p.mail,p.adresse,&p.ddn.jour,&p.ddn.mois,&p.ddn.annee,&p.sexe)!=EOF){
   	if(strcmp(p.matricule,mat)!=0){
		fprintf(g,"%s %s %s %s %s %s %s %s %d %d %d %d\n",p.matricule,p.nom,p.prenom,p.fonction,p.base_attache,p.tel,p.mail,p.adresse,p.ddn.jour,p.ddn.mois,p.ddn.annee,p.sexe);
		r=0;
	}
   }
fclose(f);
fclose(g);   
}
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
int r=-1;
FILE *f=fopen(flicence,"r");
FILE *g=fopen("tmp.txt","w");
if((f!=NULL)&&(g!=NULL)){
   while(fscanf(f,"%s %s %d %d %d %d\n",l.membre,l.qualif,&l.d.jour,&l.d.mois,&l.d.annee,&l.alerte)!=EOF){
   	if(strcmp(l.membre,mem)!=0){
		fprintf(f,"%s %s %d %d %d %d\n",l.membre,l.qualif,l.d.jour,l.d.mois,l.d.annee,p.l.alerte);
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


int rechercherpersonnel(char fperso[],char nom[],char fon[],char batt[]){
personnel p;
int r=-1;
FILE *f=fopen(fperso,"r");
if(f!=NULL){
   while(fscanf(f,"%s %s %s %s %s %s %s %s %d %d %d %d",p.matricule,p.nom,p.prenom,p.fonction,p.base_attache,p.tel,p.mail,p.adresse,&p.ddn.jour,&p.ddn.mois,&p.ddn.annee,&p.sexe)!=EOF){
       if((strcmp(p.nom,nom)==0)||(strcmp(p.fonction,fon)==0)||(strcmp(p.base_attache,batt)==0)){
       	..............
       	r=0;
        }
   }
fclose(f);
}
return r;
}








