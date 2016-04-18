#include <stdio.h>

float puissance(float a,int n);

int main(){
	float nb=3, res;
	int m=4;
	/*printf("Entrez le nombre :");
	scanf("%f,&nb");
	printf("Entrez sa puissance:");
	scanf("%d,&m");*/

	//appel foction puissance
	res= puissance(nb,m);
	printf("%f puissance %d =%f\n",nb,m,res);
}

//fonction puissance
float puissance(float a, int n){
	float resultat;
	if(n==1){
		resultat=a;
	}else{
		resultat=a*puissance(a,n-1);
	}
	return resultat;
}
