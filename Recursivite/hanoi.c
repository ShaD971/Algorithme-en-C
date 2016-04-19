#include <stdio.h>

int deplacer(int nb_disques,int depart, int arrive, int intermediaire);

int main(){
	int nbd;
	printf("Entrez le nombre de disques : ");
	scanf("%d",&nbd);
	printf("\n coup deplacement \n");

	deplacer(nbd,1,3,2);

}

int deplacer (int nb_disques,int depart, int arrivee, int intermediaire){
	static int coup=0;
	if(nb_disques==1)//deplacement d'un seul disque
		printf("%4d   %d-> %d\n",++coup,depart,arrivee);
	else{
		deplacer(nb_disques-1,depart,intermediaire,arrivee);
		deplacer(1,depart,arrivee,intermediaire);
		deplacer(nb_disques-1,intermediaire,arrivee,depart);
	}
}