//180. Escreva um programa que leia uma matriz quadrada de ordem 5 de números inteiros
//e um inteiro N e verifique quantas vezes o número N aparece dentro da matriz.
#include<stdio.h>
const int linhas=5;
const int colunas=5;
void main(){
	int cont=0,i,j,n,mat[linhas][colunas];
	//preenchendo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero inteiro: ");
			scanf("%d",&mat[i][j]);
		}
	}
	//pedindo o numero N para o usuario.
	printf("informe um numero inteiro N: ");
	scanf("%d",&n);
	//verificando qunatas vezes N aparece na matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			if(mat[i][j]==n){
				cont++;
			}
		}
	}
	//imprimindo o contador na tela do usuario.
	printf("O numero %d aparece %d vezes na matriz",n,cont);
	
	getch();
}
