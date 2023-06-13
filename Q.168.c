//168. Escreva um programa que leia dois vetores A e B de 5 números inteiros já ordenados
//e gere um terceiro vetor também ordenado contendo todos os elementos dos dois
//vetores lidos. O terceiro vetor deve ter todos os elementos dois vetores, incluindo as
//repetições.
#include<stdio.h>
const int tamanhoc=10,tamanho=5;
void main(){
	int aux,i,k,veta[tamanho],vetb[tamanho],vetc[tamanhoc];
	for(k=0; k<tamanho; k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&veta[k]);
		vetc[k]=veta[k];
	}
	for(k=0; k<tamanho; k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vetb[k]);
		vetc[tamanho+k]=vetb[k];
	}
	for(k=0; k<tamanhoc; k++){
		for(i=0; i<tamanhoc; i++){
			if(vetc[k]<vetc[i]){
				aux=vetc[i];
				vetc[i]=vetc[k];
				vetc[k]=aux;
			}
		}
		
	}
	
	for(k=0; k<tamanhoc; k++){
		printf("%d ",vetc[k]);
	}
	getch();
}
