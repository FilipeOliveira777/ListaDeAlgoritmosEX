//197. Escreva um programa que leia duas matrizes quadradas de ordem 5 de números
//inteiros e determine quantas linhas e colunas idênticas existem nas duas matrizes. 
#include<stdio.h>
const int linhas=5;
const int colunas=5;
void main(){
	int i,j,mat1[linhas][colunas],mat2[linhas][colunas];
	int contiguais=0,contlinhasiguais=0,contcolunasiguais=0,contcolunasidenticas=0;
	//preenchendo a matriz 1.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero inteiro para preencher a matriz 1: ");
			scanf("%d",&mat1[i][j]);
		}
	}
	//preenchendo a matriz 2.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero inteiro para preencher a matriz 2: ");
			scanf("%d",&mat2[i][j]);
		}
	}
	//verificando quantas linhas identicas existem na matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			if(mat1[i][j]==mat2[i][j]){
				contiguais++;
			}
		}
		if(contiguais==linhas){
			contlinhasiguais++;
		}
		contiguais=0;
	}
	//verificando quantas colunas identicas existem na matriz.
	for(i=0; i<colunas; i++){
		for(j=0; j<linhas; j++){
			if(mat1[j][i]==mat2[i][j]){
				contcolunasiguais++;
			}
		}
		if(contcolunasiguais==colunas){
			contcolunasidenticas++;
		}
		contcolunasiguais=0;
	}
	//imprimindo a quantidade de linhas e colunas identicas existe na matriz.
	printf("existe %d colunas e %d linhas identicas na matriz",contcolunasidenticas,contlinhasiguais);
getch();
}
