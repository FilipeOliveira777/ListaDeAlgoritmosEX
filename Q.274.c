/*274. Escreva um subprograma recursivo que receba como entrada duas matrizes
quadradas de ordem 5 de números inteiros e um número inteiro N entre 1 e 5 e
verifique se as duas matrizes são idênticas a partir da linha N.*/
#include<stdio.h>
const int linhas=5;
const int colunas=5;
//verificando se as matrizes são identicas a partir de N.
int verificarmatriz(int mat1[linhas][colunas], int mat2[linhas][colunas], int n, int j){
	if(n==linhas){
		return 0;
	}
	if(mat1[n][j]!=mat2[n][j]){
		return 1;
	}
	if(j<linhas-1){
	return verificarmatriz(mat1,mat2,n,j+1);
	}
	return verificarmatriz(mat1,mat2,n+1,0);
	
}
//criando o programa principal(main).
void main(){
	int n,i,j,mat1[linhas][colunas],mat2[linhas][colunas];
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("Informe um numero inteiro para preencher a matriz 1 linha %d e coluna %d: ",i+1,j+1);
			scanf("%d",&mat1[i][j]);
		}
	}
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("Informe um numero inteiro para preencher a matriz 2 linha %d e coluna %d: ",i+1,j+1);
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("Informe a linha que deve ser verificada como um numero inteiro: ");
	scanf("%d",&n);
	int matrizigual=verificarmatriz(mat1,mat2,n-1,0);
	if(matrizigual==0){
		printf("A matriz eh igual a partir da linha %d",n);
	}
	else if(matrizigual==1){
		printf("A matriz nao eh igual a partir da linha %d",n);
	}
}
