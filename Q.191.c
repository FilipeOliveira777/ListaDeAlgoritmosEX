//191. Escreva um programa que leia duas matrizes quadradas de ordem 5 de números
//reais e gere uma terceira matriz correspondente à soma das duas matrizes lidas.
#include<stdio.h>
const int linhas=5;
const int colunas=5;
void main(){
	int i,j;
	float mat1[linhas][colunas],mat2[linhas][colunas],matsoma[linhas][colunas];
	//preenchendo a primeira matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero para preencher a matriz 1: ");
			scanf("%f",&mat1[i][j]);
		}
	}
	//preenchendo a segunda matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero para preencher a matriz 2: ");
			scanf("%f",&mat2[i][j]);
		}
	}
	//soamando as matrizes.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			matsoma[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	//imprimindo a matriz com a soma da duas matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("%.2f ",matsoma[i][j]);
		}
	}
getch();	
}
