//164. Escreva um programa que leia dois vetores A e B de 5 números inteiros cada e calcule
//um terceiro vetor que contenha todos os elementos que estão presentes em pelo
//menos um dos vetores lidos. O terceiro vetor não deve armazenar valores repetidos.
#include<stdio.h>
const int tamanho=5;
int tamanhoc=10;
void main(){
	int aux,i,k,veta[tamanho],vetb[tamanho],vetc[tamanhoc];
	for(k=0; k<tamanho; k++){
		printf("informe um numero inteiro VETA: ");
		scanf("%d",&veta[k]);
		vetc[k]=veta[k];
	}
	for(k=0; k<tamanho; k++){
		printf("informe um numero inteiro VETB: ");
		scanf("%d",&vetb[k]);
		vetc[tamanho + k] = vetb[k];
	}
	for(k=0; k<tamanhoc; k++){
		for(i=k+1; i<tamanhoc; i++){
			if(vetc[k]==vetc[i]){
				aux=vetc[i];
				vetc[i]=vetc[tamanhoc-1];
				vetc[tamanhoc-1]=aux;
				tamanhoc--;
				i--;
			}
		}
	}
	for(k=0; k<tamanhoc; k++){
		printf("%d ",vetc[k]);
	}
	getch();
}
