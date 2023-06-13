//156. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
//leitura, leia um número inteiro N e imprima todos os elementos do vetor que são
//maiores que N.
#include<stdio.h>
const int quantidade=10;
void main(){
	int n,k,vet[quantidade];
	for(k=0; k<quantidade; k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vet[k]);
	}
	printf("informe um numero inteiro N: ");
	scanf("%d",&n);
	for(k=0; k<quantidade; k++){
		if(vet[k]>n){
			printf("%d ",vet[k]);
		}
	}
	
	
	
}
