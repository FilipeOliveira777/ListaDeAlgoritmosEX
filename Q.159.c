//159. Escreva um programa que leia um vetor de 10 n�meros inteiros e dois n�meros
//inteiros M e N entre 1 e 10 e inverta os elementos que ocupam as posi��es M e N do
//vetor. O programa deve tamb�m imprimir o estado do vetor antes e ap�s a invers�o.
#include<stdio.h>
const int quantidade=10;
void main(){
	int vet[quantidade],k,m,n,aux;
	for(k=0; k<quantidade; k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vet[k]);
	}
	printf("informe os dois elementos a serem invertidos: ");
	scanf("%d%d",&m,&n);
	printf("o vetor antes da inversao eh: ");
	for(k=0; k<quantidade; k++){
		printf("%d ",vet[k]);
	}
	aux = vet[m-1];
    vet[m-1] = vet[n-1];
    vet[n-1] = aux;
	printf("\no vetor depois da inversao eh: ");
	for(k=0; k<quantidade; k++){
		printf("%d ",vet[k]);
	}
	getch();
	
	
	
}
