//158. Escreva um programa que leia um vetor de 10 n�meros inteiros e, ap�s terminar a
//leitura, imprima todos os elementos do vetor que s�o maiores do que a m�dia
//aritm�tica de todos os elementos do vetor. 
#include<stdio.h>
const int quantidade=10;
void main(){
	int k,vet[quantidade],soma=0,i;
	float media;
	for(k=0; k<quantidade; k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vet[k]);
		soma=soma+vet[k];
	}
	media=(float)soma/quantidade;	
	for(k=0; k<quantidade; k++){
		if(media<vet[k]){
			printf("%d ",vet[k]);
		}
	}
	
	getch();
	
}
