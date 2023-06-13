//161. Escreva um programa que leia um vetor de vinte caracteres e verifique se o vetor é
//ou não um palíndromo.
#include<stdio.h>
const int quantidade=20;
void main(){
	int i=quantidade-1,k,cont=0;
	char vet[quantidade];
	for(k=0; k<quantidade; k++){
		printf("informe um caractere: ");
		scanf("%s",&vet[k]);
	}
	for(k=0; k<quantidade; k++){
		if(vet[k]==vet[i]){
			cont++;
		}
		i--;
	}
	if(cont==quantidade){
		printf("o vetor eh palindromo");
	}
	else{
		printf("o vetor nao eh palindromo");
	}
getch();
}
