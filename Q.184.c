//184. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
//a seguir leia um número inteiro N entre 1 e 5 e calcule a média aritmética dos
//elementos da coluna N.
#include<stdio.h>
const int linhas=5;
const int colunas=5;
void main(){
	int i,j,n,cont=0;
	float mat[linhas][colunas],soma=0,media;
	//preenchendo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero: ");
			scanf("%f",&mat[i][j]);
		}
	}
	//pedindo o numero N da coluna ao usuario.
	printf("informe um numero inteiro entre 1 e 5: ");
	scanf("%d",&n);
	//calculando a media aritimetica dos elementos da coluna N.
	for(i=0; i<linhas; i++){
		for(j=n-1; j<n; j++){
			soma=soma+mat[i][j];
		}
	}
	media=soma/linhas;
	//imprimindo a media aritimetica da coluna N.
	printf("a media da coluna %d eh %.1f",n,media);
	
getch();	
}
