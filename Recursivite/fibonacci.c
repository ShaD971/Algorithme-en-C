#include <stdio.h>

int fibonacci(int nb);

int main(){
	int compteur, N, resultat;
	printf("Entrez un nombre : ");
	scanf("%d",&N);

	resultat=fibonacci(N);
	printf("fibonacci(%d) = %d \n",N,resultat);
}

int fibonacci(int nb){
	int res;
	if(nb<=1)
		res=1;
	else
		res=fibonacci(nb-1)+fibonacci(nb-2);
	return res;
}