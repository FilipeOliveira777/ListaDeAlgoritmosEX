//153. Escreva um programa que leia dez números inteiros e, após finalizar a leitura,
//imprima todos os números lidos na mesma ordem em que eles foram digitados.
#include<stdio.h>
const int quantidade=10;
void main(){
	int i,k,vet[quantidade],n;
	for(k=1; k<=quantidade; k++){
		printf("informe um numero: ");
		scanf("%d",&vet[k]);
	}
	for(k=1; k<=quantidade; k++){
	printf("%d ",vet[k]);	
	}
	
	getch();
}
