//3. Escreva um programa em C que leia uma matriz quadrada de ordem 5 de
//números inteiros e um número inteiro N e verifique em quantas linhas da matriz
//o número N aparece.
#include<stdio.h>
const int linhas=3;
const int colunas=3;
void main(){
	int n,i,j,mat[linhas][colunas],contnumero=0,contnumeroslinhas=0;
	//preenchendo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero inteiro: ");
			scanf("%d",&mat[i][j]);
		}
	}
	//pedindo o numero N ao usuario.
	printf("informe um numero inteiro para ser verificado: ");
	scanf("%d",&n);
	//verificando em quantas linhas N aparece na matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			if(mat[i][j]==n){
				contnumero++;
			}	
		}
		if(contnumero>=1){
			contnumeroslinhas++;
		}
		contnumero=0;
	}
	//imprimindo quantas vezes N aparece na linha da matriz.
	printf("O numero %d aparece em %d linhas",n,contnumeroslinhas);
getch();	
}
