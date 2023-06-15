//177. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
//calcule a sua matriz transposta.
#include<stdio.h>
const int linhas=5;
const int colunas=5;
void main(){
	int i,j;
	float aux,mat[linhas][colunas];
	//preenchendo a matrix.
	for(i=0; i<linhas; i++){
		for(j=0; j<linhas; j++){
			printf("informe um numero: ");
			scanf("%f",&mat[i][j]);
		}
		printf("\n");
	}
	//Calculando a transposta.
	for(i=0; i<linhas; i++){
		for(j=i+1; j<colunas; j++){
			aux=mat[i][j];
			mat[i][j]=mat[j][i];
			mat[j][i]=aux;
		}	
	}
	//imprimindo a matriz trasnposta.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("%.1f ",mat[i][j]);
		}
		printf("\n");
	}
	getch();
}
