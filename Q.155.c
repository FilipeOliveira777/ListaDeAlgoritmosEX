//155. Escreva um programa que leia dez números inteiros e, após finalizar a leitura, leia um
//número inteiro N (entre 1 e 10) e imprima qual foi o enésimo número digitado pelo
//usuário.
#include<stdio.h>
const int quantidade=10;
void main(){
	int vet[quantidade],k,n;
	for(k=0; k<quantidade; k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vet[k]);
	}
	printf("informe um numero inteiro n: ");
	scanf("%d",&n);
	for(k=1; k<=n; k++){
	if(k==n){
		printf("o enesimo eh: %d",vet[k-1]);
	}
	
	}
	
} 
