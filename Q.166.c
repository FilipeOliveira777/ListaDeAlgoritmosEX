//166. Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um
//terceiro vetor que contenha todos os elementos do vetor A que não estão presentes
//no vetor B. O terceiro vetor não deverá armazenar valores repetidos.
#include<stdio.h>
const int tamanho=5;
void main(){
	//declarando as variaveis.
	int aux,cont=0,i,k,veta[tamanho],vetb[tamanho],vetc[tamanho*2],contigual=0;
	//preenchendo o vetor A.
	for(k=0; k<tamanho; k++){
		printf("informe um numero inteiro VetorA: ");
		scanf("%d",&veta[k]);		
	}
	//preenchendo o vetor B.
	for(k=0; k<tamanho; k++){
		printf("informe um numero inteiro VetorB: ");
		scanf("%d",&vetb[k]);
	}
	//comparando os elemnetos do Vetor A com B.
	for(k=0; k<tamanho; k++){
		for(i=0; i<tamanho; i++){
			if(veta[k]==vetb[i]){
				contigual++;
			}			
		}
			if(contigual==0){
			vetc[cont]=veta[k];
				cont++;
			}
		contigual=0;
	}
	//removendo numeros repetidos do vetorC.
	for(k=0; k<cont; k++){
		for(i=k+1; i<cont; i++){
			if(vetc[k]==vetc[i]){
			aux=vetc[i];
			vetc[i]=vetc[cont-1];
			vetc[cont-1]=aux;
			cont--;
			i--;
			}
			
		}
	}
	//imprimindo o vetorC.
	for(k=0; k<cont; k++){
		printf("%d ",vetc[k]);
	}
	getch();
}
