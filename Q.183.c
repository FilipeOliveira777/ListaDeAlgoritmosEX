//183. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
//a seguir leia um número inteiro N entre 1 e 5 e calcule a soma de todos os elementos
//da linha N.
#include<stdio.h>
const int linhas=5;
const int colunas=5;
void main(){
	int i,j,n;
	float mat[linhas][colunas],soma=0;
	//preenchendo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero: ");
			scanf("%f",&mat[i][j]);
		}
	}
	//pedindo o numero ao usuario.
	printf("informe um numero inteiro entre 1 e 5: ");
	scanf("%d",&n);
	//calculando os elementos da linha N.
	for(i=n-1; i<n; i++){
		for(j=0; j<colunas; j++){
			soma=soma+mat[i][j];
		}
	}
	//imprimindo a soma das linhas N.
	printf("A soma de todos os elementos da linha %d eh %.1f",n,soma);
	
	getch();
} 
