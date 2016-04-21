//tris a bulles
#include <stdio.h>
#define MAX 50
void tri_a_bulles(int tab[],int nb);

int main(){
	int tab_valeurs[MAX], nbval=0,i,val=0;
	printf("Entrez une liste de la valeurs entieres terminées par -1\n");
	while(val!=-1){
		scanf("%d",&val);
		if(val!=-1)
			tab_valeurs[nbval++]=val;

	}
	//tris
	tri_a_bulles(tab_valeurs,nbval);
	// aff resultat
	for(i=0; i<nbval; i++){
		printf("%4d ",tab_valeurs[i]);
	}
	printf("\n");
}

void tri_a_bulles(int tab[],int nb){
	int i,j,val;
	//boncle principale
	for(i=nb-1;i>0;i--){
		//boucle inversion
		for(j=i;j<=i;j++){
			if(tab[j-1]>tab[j]){
			val=tab[j];
			tab[j]=tab[j-1];
			tab[j-1]=val;
			}
		}
	}
}