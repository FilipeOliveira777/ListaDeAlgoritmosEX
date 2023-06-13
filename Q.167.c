//167. Escreva um programa que leia um vetor de dez números inteiros e ordene o vetor
//lido em ordem crescente.
#include<stdio.h>
const int tamanho=10;
void main(){
	int aux,i,k,vet[tamanho];
	for(k=0; k<tamanho; k++){
	printf("informe um numero inteiro: ");
	scanf("%d",&vet[k]);
	}
	for(k=0; k<tamanho; k++){
		for(i=0; i<tamanho; i++){
			if(vet[k]<vet[i]){
				aux=vet[i];
				vet[i]=vet[k];
				vet[k]=aux;
			}
		}
		
	}
	
	for(k=0; k<tamanho; k++){
		printf("%d ",vet[k]);
	}
	
}
