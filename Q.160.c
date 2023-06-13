//160. Escreva um programa que leia um vetor de 10 números inteiros e inverta todos os
//elementos do vetor. O programa deve ser resolvido com a utilização de apenas um
//vetor.
#include<stdio.h>
const int quantidade=10;
void main(){
	int k,vet[quantidade];
	for(k=0; k<quantidade; k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vet[k]);
	}
	printf("vetor antes da inversao: ");
	for(k=0; k<quantidade; k++){
		printf("%d ",vet[k]);
	}
	printf("\nvetor apos a inversao: ");
	for(k=quantidade; k>0; k--){
		printf("%d ",vet[k-1]);
	}
	getch();
}
