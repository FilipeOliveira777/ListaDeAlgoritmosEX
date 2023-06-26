//193. Escreva um programa que leia uma matriz quadrada de ordem dez de números
//inteiros e verifique a quantidade de linhas e colunas nulas da matriz. O resultado
//deve ser um único número referente à soma do número de linhas e colunas nulas.
#include<stdio.h>
const int linhas=10;
const int colunas=10;
void main(){
	int i,j,mat[linhas][colunas],contlinhasnulo=0,linhanula=0,contcolunasnulo=0,colunanula=0,somanulos=0;
	//preenchendo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero inteiro: ");
			scanf("%d",&mat[i][j]);
		}
	}
	//calculando quantas linhas nulas existe na matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			if(mat[i][j]==0){
				contlinhasnulo++;
			}
		}
		if(contlinhasnulo==10){
			linhanula++;
		}
		contlinhasnulo=0;
	}
	//calculando quantas colunas nulas existe na matriz.
	for(i=0; i<colunas; i++){
		for(j=0; j<linhas; j++){
			if(mat[j][i]==0){
				contcolunasnulo++;
			}
		}
		if(contcolunasnulo==10){
			colunanula++;
		}
		contcolunasnulo=0;
	}
	//somando as linhas e colunas nula.
	somanulos=linhanula+colunanula;
	//imprimindo a quantidade de linhas e colunas nulas.
	printf("na matriz existe %d linha e coluna nula",somanulos);
getch();	
}
