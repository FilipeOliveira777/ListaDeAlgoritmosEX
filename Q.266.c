/*266. Escreva um subprograma recursivo que receba como entrada um vetor de 10
números inteiros e um número inteiro N entre 1 e 10 e calcule a soma de todos os
elementos do vetor a partir da posição N.*/
#include<stdio.h>
const int tamanho=10;
//calculando a soma de todos os numeros a partir de N.
int somavetor(int vet[tamanho], int n){
	if(vet[n]==9){
		return vet[n];
	}
return vet[n] +somavetor(vet,n+1);	
}
//crinado o programa principal(main).
void main(){
	int k,vet[tamanho],n;
	for(k=0; k<tamanho; k++){
		printf("Informe um numero inteiro pos %d: ", k+1);
		scanf("%d",&vet[k]);
	}
	printf("Informe um numero inteiro N: ");
	scanf("%d",&n);
	int soma=somavetor(vet,n-1);
	printf("A soma do vetor a partidar da posicao %d eh: %d",n,soma);
getch();	
}

