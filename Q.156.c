//156. Escreva um programa que leia um vetor de 10 n�meros inteiros e, ap�s terminar a
//leitura, leia um n�mero inteiro N e imprima todos os elementos do vetor que s�o
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
