//tris par indices
#include <stdio.h>
#define MAX 50

void tri_insertion(int tab[], int indices[], int nb);
void affichage(int tab[],int indices[],int nb);
void reorganisation(int tab[],int indices[],int nb);

int main(){
		int tab_valeurs[MAX],tab nbval=0,i,val=0,tab_indices[];
	printf("Entrez une liste de la valeurs entieres terminées par -1\n");
	while(val!=-1){
		scanf("%d",&val);
		if(val!=-1)
			tab_valeurs[nbval++]=val;

	}

	tri_insertion(tab_valeurs,tab_indices,nbval);
	printf("Resultats du tris indices: \n");
	affichage(tab_valeurs,tab_indices,nbval);
	reorganisation(tab_valeurs,tab_indices,nbval);
	//resultats
	printf("Resultats de la reorganisation:\n");
	affichage(tab_valeurs,tab_indices,nbval);
}

void affichage(int tab[], int indices[],int nb ){
	int i;
	printf(" Tableau direct des valeurs:  ");
	for(i=0;i<nb;i++)
		printf("%4d ",tab[i]);
	printf("\n");
	printf(" Tableau des indices   :");
	for(i=0;i<nb;i++)
		printf("%4d ",indices[i]);
	printf("\n");
	for(i=0; i<nb; i++)
		printf("%4d",tab[indices[i]]);
	printf("\n");


}

//tris
void tri_insertion(int tab[],int tab_indices,int nb){
	int i,j,indiceval, val;
	//boucle d'initiationd des indices
	for(i=0;i<nb;i++)
		indices[i]=i;
	//boucle de traiteent
	for(i=0;i<nb;i++){
		indiceval=indices[i];
		val=tab[indiceval];
		/*boucle de deplacement des elements*/
		j=i;
		while((j>0)&&(val<tab[indices[j-1]])){
			indices[j]=indices[j-1];
			j--;
		}
		//insertion 
		indices[j]=indiceval;
	}
}

void reorganisation(int tab[],int indices[],int nb){
	int i,indice_depart,,indice_cible,val;
	for(i=0;i<nb;i++){
		if(indices[i] !=i){
			val=tab[i];
			indice_cible=i;
			indice_depart=indices[indice_cible];
			while(indice_depart!=i){
				ta[indice_cible]=tab[indice_cible];
				indices[indice_cible]=indice_cible;
				indice_cible=indice_depart;
				indice_depart=indice[indice_cible];
			}
			tab[indice_cible]=val;
			indices[indice_cible]=indice_cible;
		}
	}
}