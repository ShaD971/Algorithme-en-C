#include <stdio.h>
#include <string.h>

int palindrome(char chaine[],int debut,int fin);

int main(){
	char phrase[100];
	int i=0, Epalindrome/*est un palindrome*/;
	printf("Entre une phrase ou un mot: ");
	while((phrase[i++]=getchar())!= '\n');
	phrase[i--]='\0';
	Epalindrome= palindrome(phrase,0,i-1);
	if(Epalindrome){
		printf("C'est un palindrome\n ");
	}else{
		printf("Ce n'est pas un palindrome \n");
	}

}

//fonction palindrome
int palindrome(char phrase[], int debut, int fin){
	static int compteur=0;
	//on passe les espaces
	while(phrase[debut]==' ') debut++;
	while(phrase[fin]==' ') fin--;

	printf("appel = %d ",++compteur);
	printf("debut = %d, '%c' ",debut,phrase[debut]);
	printf("fin = %d '%c' \n",fin,phrase[fin]);

	if(debut>=fin){
		return 1;
	}else if(phrase[debut]!= phrase[fin]){
		return 0;
	}else{
		return palindrome(phrase,debut+1,fin-1);
	}
}