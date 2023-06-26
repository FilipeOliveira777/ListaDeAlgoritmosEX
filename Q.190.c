//190. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
//verifique quantas linhas nulas existem na matriz.
#include<stdio.h>
const int linhas=5;
const int colunas=5;
void main(){
	int i,j,contnulo=0,contlinhasnula=0;
	float mat[linhas][colunas];
	//preenchendo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("Informe um numero: ");
			scanf("%f",&mat[i][j]);
		}
	}
	//verificando quantas linhas nula existem na matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			if(mat[i][j]==0){
				contnulo++;
			}
		}
		if(contnulo==5){
			contlinhasnula++;
		}
		contnulo=0;
	}
	
	//imprimindo a quantidade de linhas nulas existentes na matriz.
	printf("Existe %d linha nula na matriz",contlinhasnula);
	
getch();	
} 
