//165. Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um
//terceiro vetor que contenha todos os elementos que estão presentes nos dois
//vetores. O terceiro vetor não deverá armazenar valores repetidos.
#include<stdio.h>
const int tamanho=5;
void main(){
	int aux,i,k,veta[tamanho],vetb[tamanho],cont=0;
	int vetc[tamanho*2];
	//preenchendo vetorA
	for(k=0; k<tamanho; k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&veta[k]);
	}
	//preenchendo vetorB
	for(k=0; k<tamanho; k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vetb[k]);
	}
	//comparando A com B
	for(k=0; k<tamanho; k++){
		for(i=0; i<tamanho; i++){
			if(veta[k]==vetb[i]){
				vetc[cont]=veta[k];
				cont++;	
			}
		}
	}
	//removendo numeros repetidos do vetorc
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
	//imprimindo o vetorC
	for(k=0; k<cont; k++){
		printf("%d ",vetc[k]);
	}
	getch();
	
}
