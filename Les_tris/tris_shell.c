//tris Shell
#include <stdio.h>
#define MAX 50
void tri_shell(int tab[],int nb);

int main(){
	int tab_valeurs[MAX], nbval=0,i,val=0;
	printf("Entrez une liste de la valeurs entieres terminées par -1\n");
	while(val!=-1){
		scanf("%d",&val);
		if(val!=-1)
			tab_valeurs[nbval++]=val;

	}
	//tris
	tri_shell(tab_valeurs,nbval);
	// aff resultat
	for(i=0; i<nbval; i++){
		printf("%4d ",tab_valeurs[i]);
	}
	printf("\n");
}
void tri_shell(int tab[],int nb){
	int h,i,j,val;
	h=1;
	while(h<=nb)
		h=(3*h)+1;
	//traitement
	while(h>1){
		h=h/3;

		for(i=0;i<nb;i++){
			val=tab[i];
			//deplacement element
			j=i;
			while((j>=h) && (val<tab[j-h])){
				tab[j]=tab[j-h];
				j-=h;
			}
			//insertion des valeur
			tab[j]=val;
		}
	}
}