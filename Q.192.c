//192. Escreva um programa que leia uma matriz quadrada de ordem 5 de n�meros reais e
//um n�mero real N e gere uma terceira matriz correspondente � multiplica��o da
//matriz lida por N.
#include<stdio.h>
const int linhas=5;
const int colunas=5;
void main(){
	int i,j;
	float mat[linhas][colunas],n,matmulti[linhas][colunas];
	//preenchendo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero: ");
			scanf("%f",&mat[i][j]);
		}
	}
	//pedindo o numero N ao usuario.
	printf("\ninforme o numero para a multiplicacao: ");
	scanf("%f",&n);
	//fazendo a multiplica��o da matriz por N.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			matmulti[i][j]=mat[i][j]*n;
		}
	}
	//imprimindo a matriz com a multiplica��o pelo numero N.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("%.2f ",matmulti[i][j]);
		}
	}
getch();	
}
