//176. Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros
//e imprima a matriz lida.
#include<stdio.h>
const int ordem=4;
void main(){
	int i,mat[ordem][ordem],j;
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
		printf("informe um numero inteiro: ");
		scanf("%d",&mat[i][j]);
		}
	}
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
		printf("%d ",mat[i][j]);
		}
		printf("\n");	
	}
	
	getch();
	
}

