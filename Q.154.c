//154. Escreva um programa que leia dez n�meros inteiros e, ap�s finalizar a leitura,
//imprima todos os n�meros lidos na ordem inversa em que eles foram digitados.
#include<stdio.h>
const int quantidade=10;
void main(){
	int vet[quantidade],k;
	for(k=0; k<quantidade; k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vet[k]);
		
	}
	for(k=quantidade-1; k>=0; k--){
		printf("%d ",vet[k]);
	}
	
	
	
}
