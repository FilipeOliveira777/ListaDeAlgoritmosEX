//4. Escreva um programa em C que leia dois vetores de 5 números inteiros e cada e
//imprima os números que aparecem no primeiro vetor mas não aparecem no
//segundo. Você pode supor que dentro de um mesmo vetor não há números
//repetidos.
#include<stdio.h>
const int tamanho=5;
void main(){
	int i,vet1[tamanho],k,vet2[tamanho];
	int contiguais=0,cont=0;
	int vetc[tamanho];
	//preenchendo o vetor 1.
	for(k=0; k<tamanho; k++){
		printf("informe um numero inteiro para preencher o vetor 1: ");
		scanf("%d",&vet1[k]);
	}
	//preenchendo o vetor 2.
	for(k=0; k<tamanho; k++){
		printf("informe um numero inteiro para preencher o vetor 2: ");
		scanf("%d",&vet2[k]);
	}
	//verificando os numeros q aparece no primeiro vetor e nao aparece no segundo.
	for(k=0; k<tamanho; k++){
		for(i=0; i<tamanho; i++){
			if(vet1[k]==vet2[i])
			contiguais++;
		}
		if(contiguais==0){
			vetc[cont]=vet1[k];
			cont++;
		}
		contiguais=0;
	}
	//imprimindo o vetor C com os numeros q aparece no primeiro vetor mas n aparece no segundo.
	for(k=0; k<cont; k++){
		printf("%d ",vetc[k]);
	}
	
getch();	
	
}
