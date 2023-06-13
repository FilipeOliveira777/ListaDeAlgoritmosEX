//157. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
//leitura, leia um número inteiro N e imprima todas as posições em que o número N
//aparece dentro do vetor.
#include<stdio.h>
int const quantidade=10;
void main(){
	int vet[quantidade],k,n;
	for(k=0; k<quantidade; k++){
		printf("informe um numero: ");
		scanf("%d",&vet[k]);
	}
	printf("informe um numero inteiro N: ");
	scanf("%d",&n);
	for(k=0; k<quantidade; k++){
		if(vet[k]==n){
			printf("posicao %d ",k+1);
		}
	}
	getch();
}
