//198. Escreva um programa que leia duas matrizes quadradas de ordem 3 de números
//inteiros e determine todos os números que aparecem nas duas matrizes. Cada
//número deve ser impresso apenas uma vez.
#include<Stdio.h>
const int linhas=3;
const int colunas=3;
void main(){
	int cont=0;
	int i,j,k,l,m,mat1[linhas][colunas],mat2[linhas][colunas];
	int vet[cont];
	//preenchendo a matriz 1.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero inteiro para preencher a matriz1: ");
			scanf("%d",&mat1[i][j]);
		}
	}
	//preenchendo a matriz 2.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero inteiro para preencher a matriz2: ");
			scanf("%d",&mat2[i][j]);
		}
	}
	//verificando se o numero aparece nas duas matriz.
	for(i=0; i<linhas; i++){
		for(m=0; m<colunas; m++){
		for(l=0; l<linhas; l++){
		for(j=0; j<colunas; j++){
			if(mat1[i][m]==mat2[l][j]){
				vet[cont]=mat1[i][j];
				cont++;
			}
		}
		
		}
		}
	}
	//imprimindo os nuemros que aparecem nas dua matriz.
	for(k=0; k<=cont; k++){
		printf("%d ",vet[k]);
	}
	getch();
}
