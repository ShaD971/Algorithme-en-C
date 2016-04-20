//tris par selection ou insertion
#include <stdio.h>
#define MAX 50
void tri_selection(int tab[],int nb);

int main(){
	int tab_valeurs[MAX], nbval=0,i,val=0;
	printf("Entrez une liste de la valeurs entieres terminées par -1\n");
	while(val!=-1){
		scanf("%d",&val);
		if(val!=-1)
			tab_valeurs[nbval++]=val;

	}
	//tris
	//tri_insertion(tab_valeurs,nbval);
	tri_selection(tab_valeurs,nbval);
	// aff resultat
	for(i=0; i<nbval; i++){
		printf("%4d ",tab_valeurs[i]);
	}
	printf("\n");
}

void tri_selection(int tab[],int nb){
	int i,j,k,min;
	for(i=0;i<nb;i++){
		min=i;
		//minimun
		for(j=i+1;j<nb;j++){
			if(tab[j]<tab[min])
				min=j;
		}
		//inversion
		k=tab[i];
		tab[i]=tab[min];
		tab[min]=k;
	}
}

void tri_insertion(int tab[],int nb){
	int i,j,val;
	for(i=0;i<nb;i++){
		val=tab[i];
		j=i;
		while((j>0)&&(val<tab[j-i])){
			tab[j]=tab[j-1];
			j--;
		}
		tab[j]=val;
	}
}