//157. Escreva um programa que leia um vetor de 10 n�meros inteiros e, ap�s terminar a
//leitura, leia um n�mero inteiro N e imprima todas as posi��es em que o n�mero N
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
