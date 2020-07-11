#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE_MAX 1000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {	
	FILE *fichier=NULL;//definition des fichier qu'on va utlisiser
	FILE *fichierA=NULL;//definition des fichier qu'on va utlisiser
	FILE *fichierB=NULL;//definition des fichier qu'on va utlisiser
	FILE *fichierC=NULL;//definition des fichier qu'on va utlisiser
	FILE *fichierD=NULL;//definition des fichier qu'on va utlisiser
	FILE *fichierE=NULL;//definition des fichier qu'on va utlisiser
	FILE *fichierF=NULL;//definition des fichier qu'on va utlisiser
	FILE *fichierG=NULL;//definition des fichier qu'on va utlisiser
	int i=0;// i est un compteur pour le nombre de medicament
	int a=0;// est un entier qui represente le nombre de medicament saisie par l'utilistateur
	int b=0;// ce int va servir à desactiver la fonction qui demande à l'utilisateur de rentrer un medicament si il souhaite activer la fonction de concatenation
	int c=0;// le nombre de mot qui constitue le nom du medicament
	int d=1;
	unsigned long int e=0;// il enregistre le code bare du produit retenu
	int f=0;//compteur des produits retenus
	int k=0;// compteur pour la concatenation des mots qui constitue le medicament
	int l=0;// il calcule le nombre totale de ligne dans la recherche des medicament dans la base de données
	int g=0;// il calcule le nombre de ligne dans lequelle se trouve la chaine de caractére rechercher dans la base de données
	int h=0;// il calcule le nombre de ligne dans lequelle ne se trouve pas la chaine de caractére rechercher dans la base de données
	int j=0;// compteur affin d'afficher l'ensemble des medicaments trouvées
	int m=0;// compteur de recherche des medicaments dans la famille A,B,C,D,F,G
	int q=0;// compteur des produit trouvées dans la famille A
	int r=0;// compteur des produit trouvées dans la famille B
	int s=0;// compteur des produit trouvées dans la famille C
	int t=0;// compteur des produit trouvées dans la famille D
	int u=0;// compteur des produit trouvées dans la famille E
	int v=0;// compteur des produit trouvées dans la famille F
	int w=0;// compteur des produit trouvées dans la famille G
	int x=0;// c'est compteur des produit non trouvées	
 unsigned long int mynum=0;// recoit le code bare 
	char tab[]=" ";//est le nom du medicament entrer par l'utilisateur
	char tab2[]=" ";// ce tableau est utiliser pour concatener les mot entrer par l'utilistateur si il veut souhaiter entrer deux mot au plus , généralement on a pas besoin de ca et un seul mot suffit pour trouver le medicament , et la partie qui sert à concatener est commenter pour l'instant, vous pouver l'activer si vou voulez !
	char tab3[]=" ";// ce tableau est utiliser pour concatener les mot entrer par l'utilistateur si il veut souhaiter entrer deux mot au plus , généralement on a pas besoin de ca et un seul mot suffit pour trouver le medicament , et la partie qui sert à concatener est commenter pour l'instant, vous pouver l'activer si vou voulez !
	char tab4[]=" ";// ce tableau est utiliser pour concatener les mot entrer par l'utilistateur si il veut souhaiter entrer deux mot au plus , généralement on a pas besoin de ca et un seul mot suffit pour trouver le medicament , et la partie qui sert à concatener est commenter pour l'instant, vous pouver l'activer si vou voulez !
	char tab1[]=" ";// ce tableau est utiliser pour concatener les mot entrer par l'utilistateur si il veut souhaiter entrer deux mot au plus , généralement on a pas besoin de ca et un seul mot suffit pour trouver le medicament , et la partie qui sert à concatener est commenter pour l'instant, vous pouver l'activer si vou voulez !
	char tab5[]=" ";// ce tableau est utiliser pour concatener les mot entrer par l'utilistateur si il veut souhaiter entrer deux mot au plus , généralement on a pas besoin de ca et un seul mot suffit pour trouver le medicament , et la partie qui sert à concatener est commenter pour l'instant, vous pouver l'activer si vou voulez !
	char tab6[]=" ";// ce tableau est utiliser pour concatener les mot entrer par l'utilistateur si il veut souhaiter entrer deux mot au plus , généralement on a pas besoin de ca et un seul mot suffit pour trouver le medicament , et la partie qui sert à concatener est commenter pour l'instant, vous pouver l'activer si vou voulez !
	char str[10]={0};// c'est le code bare traduit en chaine de caractére
	unsigned long int tab8[100];// enregitre le code bare du produit retenu
	char *result;// ca resoit au cours du programme la ligne ou le moniteur trouve la chaine de caractére saisie
	char *result2;// ca resoit au cours du programme la chaine concatenener pour former le nom du medicament
	char chaine [TAILLE_MAX ]=" ";// cette chaine de caractére est la ligne lu dans les fichier texte medicment 
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////la phase des definitions est terminer ici //////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
printf("                                                                            MED-INTERRACT      a     votre     service  !\n\n\n\n");
		while (d==1){
	fichier = fopen("medicament.txt","r+");
	if (fichier!=NULL){	
	printf("Combient de medicament avez vous sur votre ordonnace?\n ");
	scanf("%d",&a);
	for (i=0;i<a;i++){         	
		    /*    b=1;    //
			   printf ("Votre medicament se constitue de combient de mot?:\n");
	            scanf ("%d",&c);
	            printf ("entrer la premiere ocurence\n");
	            scanf ("%s",tab6);
	                 for (k=0;k<c;k++){
	                 	printf ("entrer le %d mot:\n",k+1);
	                  scanf ("%s",tab1);
	                 	if (k+1<c){                                                                                    // c'est la fontion qui sert à concaténer les mots 
	                 		strcpy(tab2,strcat(tab1,tab4));
                            strcpy(tab3,strcat(tab3,tab2));
						 }
		              else {
		              	strcpy(tab3,strcat(tab3,tab1));
					     }
                    	}
                    	result2 = strstr(tab3,tab6);
                strcpy(tab,result2);
                printf ("la chaine de caractére saisie est : %s\n",tab);*/  //
                if (b==0){
                printf("entrer le %d medicament en majiscule :\n",i+1); // si l'utilisateur souhaite d'activer la boucle de la concaténation il doit commenter la ligne 59 et 77
                scanf("%s",tab);
				}
		while	(fgets(chaine,TAILLE_MAX ,fichier)!=NULL){

               	if (strstr(chaine,tab)!= NULL)	
                {
    	         result =strstr(chaine,tab);
		         l++;
		         h++;
		         printf("produit %d trouvée:\n",h);
		         printf ("%s\n",chaine);
	             }	
     else { l++;
            g++;          
	}	                                      	} 
		if (g==l){
         printf("produit non trouvée:\n");
         x++;
         } 
         else {
           printf (" entrer le code bare du produit que vous voulez achetez\n");
           scanf ("%d",&e);	
           tab8[f]=e;
           printf ("code du produit retenue : %d\n",tab8[f]);
           f++;
           h=0;
		 }
		 if (b==1){
strcpy(tab,tab5);
strcpy(tab1,tab5);
strcpy(tab2,tab5);    // initiation des char                                         
strcpy(tab3,tab5);
strcpy(tab4,tab5);
 }
	fichier = fopen("medicament.txt","r+");
	l=0;
	g=0;	
	}
	fclose(fichier);
	} 
	else {
		printf ("impossible d'ouvrire le fichier medicament.txt\n");
	}
	printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
	if (x!=a){	
printf ("l'ensemble des medicament retenu sont de code :\n");
	fichier = fopen("medicament.txt","r+");
	if (fichier!=NULL){	
		for (j=0;j<f;j++){
			printf("produit no %d choisis:\n",j+1);
			mynum=tab8[j];
	 itoa(mynum,str,10);
				while	(fgets(chaine,TAILLE_MAX ,fichier)!=NULL){
						if (strstr(chaine,str)!= NULL)	
                {
		         printf ("%s\n",chaine);
	             }
	             mynum=0;		
}
	fichier = fopen("medicament.txt","r+");
}
}
	fclose(fichier);
printf("en cours de rechercher des interractions ........\n");}

	///////////////////////////////////////////////////////////////////////////////////
		////////dans cette phase on cherche les produit qui sont dans la famille A ////////////////////////////
		/////////////////////////////////////////////////////////////////////////////////
			fichierA = fopen("familleA.txt","r+");
				for (m=0;m<f;m++){
	if (fichierA!=NULL){
		mynum=tab8[m];
	 itoa(mynum,str,10);			
	while	(fgets(chaine,TAILLE_MAX ,fichierA)!=NULL){	
		
			if (strstr(chaine,str)!= NULL)	
                {
		         printf("produit %d retenu appartient a la famille A:\n\n",m+1);
		         q++;
		         mynum=0;
	             }         
	}		
	fichierA = fopen("familleA.txt","r+");		
		fclose(fichierA);
}
	else {
		printf ("impossible d'ouvrire le fichier familleA.txt\n");
	}			
fichierA = fopen("familleA.txt","r+");		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////dans cette phase on cherche les produit qui sont dans la famille B //////////////////////////////	
	///////////////////////////////////////////////////////////////////////////////////
			fichierB = fopen("familleB.txt","r+");
	if (fichierB!=NULL){
		mynum=tab8[m];
	 itoa(mynum,str,10);		
	while	(fgets(chaine,TAILLE_MAX ,fichierB)!=NULL){	
		
			if (strstr(chaine,str)!= NULL)	
                {             
		         printf("produit %d retenu appartient a la famille B:\n\n",m+1);
		         r++;
		         mynum=0;
	             }
	}			
	fichierB = fopen("familleB.txt","r+");		
		fclose(fichierB);
}
	else {
		printf ("impossible d'ouvrire le fichier familleB.txt\n");
	}			
fichierB = fopen("familleB.txt","r+");	
	///////////////////////////////////////////////////////////////////////////////////
		/////////dans cette phase on cherche les produit qui sont dans la famille C////////////////////////
		/////////////////////////////////////////////////////////////////////////////////
			fichierC = fopen("familleC.txt","r+");
	if (fichierC!=NULL){
		mynum=tab8[m];
	 itoa(mynum,str,10);			
	while	(fgets(chaine,TAILLE_MAX ,fichierC)!=NULL){			
			if (strstr(chaine,str)!= NULL)	
                {
		         printf("produit %d retenu appartient a la famille C:\n\n",m+1);
		         s++;
		         mynum=0;
	             }
	}		
	fichierC = fopen("familleC.txt","r+");		
		fclose(fichierC);
}
	else {
		printf ("impossible d'ouvrire le fichier familleC.txt\n");
	}			
fichierC = fopen("familleC.txt","r+");
	///////////////////////////////////////////////////////////////////////////////////
		/////////dans cette phase on cherche les produit qui sont dans la famille D///////////////
		/////////////////////////////////////////////////////////////////////////////////
			fichierD = fopen("familleD.txt","r+");
	if (fichierD!=NULL){
		mynum=tab8[m];
	 itoa(mynum,str,10);
	while	(fgets(chaine,TAILLE_MAX ,fichierD)!=NULL){	
		
			if (strstr(chaine,str)!= NULL)	
                {
		         printf("produit %d retenu appartient a la famille D:\n\n",m+1);
		         t++;
		         mynum=0;
	             }
	}			
	fichierD = fopen("familleD.txt","r+");		
		fclose(fichierD);
}
	else {
		printf ("impossible d'ouvrire le fichier familleD.txt\n");
	}			
fichierD = fopen("familleD.txt","r+");
	///////////////////////////////////////////////////////////////////////////////////
		//////////dans cette phase on cherche les produit qui sont dans la famille E///////////////////////
		/////////////////////////////////////////////////////////////////////////////////
			fichierE = fopen("familleE.txt","r+");
	if (fichierE!=NULL){
		mynum=tab8[m];
	 itoa(mynum,str,10);	
	while	(fgets(chaine,TAILLE_MAX ,fichierE)!=NULL){	
		
			if (strstr(chaine,str)!= NULL)	
                {
		         printf("produit %d retenu appartient a la famille E:\n\n",m+1);
		         u++;
		         mynum=0;
	             }
	}			
	fichierE = fopen("familleE.txt","r+");		
		fclose(fichierE);
}
	else {
		printf ("impossible d'ouvrire le fichier familleE.txt\n\n");
	}			
fichierE = fopen("familleE.txt","r+");
	///////////////////////////////////////////////////////////////////////////////////
		///////////dans cette phase on cherche les produit qui sont dans la famille F///////////////
		/////////////////////////////////////////////////////////////////////////////////
			fichierF = fopen("familleF.txt","r+");
	if (fichierF!=NULL){
		mynum=tab8[m];
	 itoa(mynum,str,10);		
	while	(fgets(chaine,TAILLE_MAX ,fichierF)!=NULL){	
		
			if (strstr(chaine,str)!= NULL)	
                {
		         printf("produit %d retenu appartient a la famille F:\n\n",m+1);
		         v++;
		         mynum=0;
	             }
	}			
	fichierF = fopen("familleF.txt","r+");		
		fclose(fichierF);
}
	else {
		printf ("impossible d'ouvrire le fichier familleF.txt\n");
	}			
fichierF = fopen("familleF.txt","r+");
	///////////////////////////////////////////////////////////////////////////////////
		////////dans cette phase on cherche les produit qui sont dans la famille G////////////////////////
		/////////////////////////////////////////////////////////////////////////////////
			fichierG = fopen("familleG.txt","r+");
	if (fichierG!=NULL){
		mynum=tab8[m];
	 itoa(mynum,str,10);	
	while	(fgets(chaine,TAILLE_MAX ,fichierG)!=NULL){	
		
			if (strstr(chaine,str)!= NULL)	
                {
		         printf("produit %d retenu appartient a la famille G:\n\n",m+1);
		         w++;
		         mynum=0;
	             }
	}		
	fichierG = fopen("familleG.txt","r+");		
		fclose(fichierG);
}
	else {
		printf ("impossible d'ouvrire le fichier familleG.txt\n\n");
	}	
}
fichierG = fopen("familleG.txt","r+");
	///////////////////////////////////////////////////////////////////////////////////
		////////phase de l'annonce des résultats///////////////////////
		/////////////////////////////////////////////////////////////////////////////////
if (x!=a){
if (a-x>1){			
if (q>1){
	printf ("il y a une interraction du a la presence de %d medicaments appartenant a la famille A!\n\n",q);
}
if (r>1){
	printf ("il y a une interraction du a la presence de %d medicaments appartenant a la famille B!\n\n",r);
}
if (s>1){
	printf ("il y a une interraction du a la presence de %d medicaments appartenant a la famille C!\n\n",s);
}
if (t>1){
	printf ("il y a une interraction du a la presence de %d medicaments appartenant a la famille D!\n\n",t);
}
if (u>1){
	printf ("il y a une interraction du a la presence de %d medicaments appartenant a la famille E!\n\n",u);
}
if (v>1){
	printf ("il y a une interraction du a la presence de %d medicaments appartenant a la famille F!\n\n",v);
}
if (w>1){
	printf ("il y a une interraction du a la presence de %d medicaments appartenant a la famille G!\n\n",w);
}
if (q<2){
	if (r<2){
		if(s<2){
			if(t<2){
				if(u<2){
					if(v<2){
						if(w<2){
								printf("vous n'avez pas d'interraction sur votre ordonance\n\n");

						}
					}
				}
			}
		}
	}
}
}
}
if (a-x==1){
	printf ("un seul medicament ne peut pas intéragir avec lui meme XD :)\n\n");
}
	printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
printf("reprendre:1                    eteindre:0\n");
scanf("%d",&d);
if (d==1);{
	a=0;b=0;c=0;f=0;g=0;h=0;i=0;j=0;k=0;l=0;m=0;q=0;r=0;s=0;t=0;u=0;v=0;w=0;x=0;// initiation des compteur utilisée
}
}
	return 0;
}
