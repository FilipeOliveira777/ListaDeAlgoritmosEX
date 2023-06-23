//182. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
//determine o maior valor presente na diagonal principal.
#include<stdio.h>
const int linhas=5;
const int colunas=5;
void main(){
	int cont=0,i,j;
	float mat[linhas][colunas],maiorvalor=0;
	//preenchendo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("innforme um numero: ");
			scanf("%f",&mat[i][j]);
		}
	}
	//pegando o maior numero da diagonal principal.
	for(i=0; i<linhas; i++){
		if(mat[i][i]>maiorvalor){
			maiorvalor=mat[i][i];	
		}
	}
	//imprimindo o maior valor presente na diagonal principal da matriz.
	printf("%.1f",maiorvalor);
	
getch();
}
