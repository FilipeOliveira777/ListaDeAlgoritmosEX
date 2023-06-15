//181. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
//a seguir leia um número inteiro N entre 1 e 5 e imprima os N primeiros elementos da
//sua diagonal principal.
#include<stdio.h>
const int linhas=5;
const int colunas=5;
void main(){
	int i,j,n,cont=0;
	float mat[linhas][colunas];
	//preenchendo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero: ");
			scanf("%f",&mat[i][j]);
		}
	}
	//pedindo o numero N para o usuario.
	printf("informe um numero entre 1 e 5: ");
	scanf("%d",&n);
	//imprimindo os N primeiros numeros da diagonal principal.
	for(i=0; i<linhas; i++){
		if(cont<n){
		printf("%.1f ",mat[i][i]);
		cont++;		
		}
	}
	getch();
}
