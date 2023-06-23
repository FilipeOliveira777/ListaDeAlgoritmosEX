//185. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
//calcule o valor da soma dos elementos de cada uma de suas linhas.
#include<stdio.h>
const int linhas=5;
const int colunas=5;
void main(){
	int i,j;
	float mat[linhas][colunas],soma=0;
	//preenchendo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero: ");
			scanf("%f",&mat[i][j]);
		}
	}
	//calculando e imprimindo a somados elementos de cada linha da matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
		soma=soma+mat[i][j];
		}
	printf("A soma da linha %d eh %.1f \n",i+1,soma);
	soma=0;	
	}
	
}
