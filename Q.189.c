//189. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
//a seguir leia um número inteiro N entre 1 e 5 e verifique se a coluna N da matriz é
//nula.
#include<stdio.h>
const int linhas=5;
const int colunas=5;
void main(){
	int i,j,n,contnulo=0;
	float mat[linhas][colunas];
	//preenchendo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero: ");
			scanf("%f",&mat[i][j]);
		}
	}
	//pedindo o numero da coluna ao usuario.
	printf("informe um numero inteiro entre 1 e 5: ");
	scanf("%d",&n);
	//verificando se a coluna N da matriz eh nula.
	for(i=0; i<linhas; i++){
		for(j=n-1; j<n; j++){	
			if(mat[i][j]==0){
			contnulo++;
			}	
		}	
	}
	//imprimindo se a coluna eh nula ou nao.
	if(contnulo==5){
		printf("A coluna %d da matriz eh nula",n);
	}
	else{
		printf("A coluna %d da matriz nao eh nula",n);
	}
getch();
}
