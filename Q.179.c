//179. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
//imprima todos os elementos que estão acima e abaixo da diagonal principal.
#include<stdio.h>
const int linhas=5;
const int colunas=5;
void main(){
	int i,j;
	float mat[linhas][colunas];
	//preenchendo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero: ");
			scanf("%f",&mat[i][j]);
		}
	}
	//imrprimindo os numeros acima da diagonal principal.
	for(i=0; i<linhas; i++){
		for(j=i+1; j<colunas; j++){
		printf("%.1f ",mat[i][j]);
		}
	}
	//imrprimindo os numeros abaixo da diagonal principal.
	for(i=1; i<linhas; i++){
		for(j=0; j<i; j++){
		printf("%.1f ",mat[i][j]);
		}
	}
	
	getch();
}
