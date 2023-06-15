//171. Escreva um programa que leia dois vetores de 5 números reais cada e calcule o
//produto escalar destes vetores.
#include<stdio.h>
const int tamanho=5;
void main(){
	int k;
	float soma=0,veta[tamanho],vetb[tamanho],produto;
	//preenchendo o primeiro vetor.
	for(k=0; k<tamanho; k++){
		printf("informe um numero: ");
		scanf("%f",&veta[k]);
	}
	//preenchendo o segundo vetor.
	for(k=0; k<tamanho; k++){
		printf("informe um numero: ");
		scanf("%f",&vetb[k]);
	}
	//multiplicando as posições dos vetores.
	for(k=0; k<tamanho; k++){
		produto=veta[k]*vetb[k];
		veta[k]=produto;	
	}
	//somando as posições.
	for(k=0; k<tamanho; k++){
	soma = soma+veta[k];	
	}
	//imprimindo o produto escalar(soma).
	printf("O produto escalar dos vetores eh: %.1f",soma);
	
}
