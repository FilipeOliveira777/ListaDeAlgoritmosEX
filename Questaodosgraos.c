//Questao dos grao.
#include<stdio.h>
const int linhas=4;
const int colunas=4;
void main(){
	int mat[linhas][colunas],i,j,n=1;
	//preenchendo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			mat[i][j]=n;
			n=n*2;
		}
	}
	//imprimindo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
}
