#include <stdio.h>
//nb => nombre
int factorielle(int nb);

int main(){
	int compteur,N,res;//res =>resultats
	printf("entrez un nombre: ");
	scanf("%d",&N);

	res=factorielle(N);
	printf("la factorielle de %d = %d\n",N,res);
}

int factorielle(int nb){
	int res;
	if(nb<0){
		res=0;
}else if((nb==1)||(nb==0)){
	res=1;
}else{
	res= nb*factorielle(nb-1);
	return res;

}
}


