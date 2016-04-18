/*Decomposition facteur premier*/
/*Compilation: gcc DecFactPremier.c -o DecFactPremier -lm*/

#include <stdio.h>
#include <math.h>
#define TAILLE 300000

int nombrepremier(int nb);
void decomposition(int nb);
int fact_premiers[TAILLE];
int nbfact=0, tab_premiers[TAILLE], nbvalpremier=0;

int main(){
	int N,i;
	printf("Nom entier a decomposer: ");
	scanf("%d",&N);

	//Calcule nombre premier
	tab_premiers[nbvalpremier++]=2;
	for(i=3;i<(sqrt(N)+1);i+=2){
		if(nombrepremier(i))
			tab_premiers[nbvalpremier++]=i;
	}

	//decomposition en facteur premier
	decomposition(N);

	// affiche resultat:
	printf("%d se decompose en ces nombres premiers : \n ",N);
	for(i=0;i<nbfact;i++)
		printf(" %d",fact_premiers[i]);
	printf("\n");
	
}

	//decomposition en facteur premier
void decomposition(int nb){
	int numcase=0, trouve=0,diviseur, reste;
	if(nombrepremier(nb))
		fact_premiers[nbfact++]=nb;
	else{
		while(!trouve){
			diviseur=tab_premiers[numcase++];
			reste=nb%diviseur;
			if(reste==0){
				trouve=1;
				fact_premiers[nbfact++]=diviseur;
				decomposition(nb/diviseur);
			}
		}
	}
}

int nombrepremier(int nb){
	int reste, trouve, diviseur, i=0, limite, nb_iteratore=0;
	//partie entiere de la racine carre
	limite=sqrt(nb)+1;
	trouve=0;
	//on teste tous les diviseurs contenus dans le tableaux
	diviseur=2;
	while((!trouve)&&(diviseur<limite)){
		nb_iteratore++;
		reste=nb%diviseur;
		if(reste==0)
			trouve=1;
		diviseur=tab_premiers[++i];
	}
	return(!trouve);
}