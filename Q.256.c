//256. Escreva um subprograma recursivo que receba como entrada uma matriz quadrada
//de ordem 5 de números reais e um número inteiro N (entre 1 e 5) e imprima os N
//primeiros números da diagonal principal.
#include<stdio.h>
const int linhas=5;
const int colunas=5;
//imorimindo os numeros da diagonal principal.
void imprimirnumeros(float mat[linhas][colunas],int n){
	if(n<0){
		return;
	}
	imprimirnumeros(mat,n-1);
	printf("%.0f ",mat[n][n]);	
}
//criando o programa principal(main).
void main(){
	int i,j,n;
	float mat[linhas][colunas];
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("Informe um numero: ");
			scanf("%f",&mat[i][j]);
		}
	}
	printf("Informe um numero inteiro entre 1 e 5: ");
	scanf("%d",&n);
	imprimirnumeros(mat,n-1);
getch();	
}
