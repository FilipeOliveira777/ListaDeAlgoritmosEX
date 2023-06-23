//188. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
//a seguir leia um número inteiro N e determine a quantidade de números primos na
//coluna N.
#include<stdio.h>
const int linhas=5;
const int colunas=5;
void main(){
	int i,j,k,n,contprimos=0,divisores=0,numerointeiro;
	float mat[linhas][colunas],numero;
	//preenchendo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero: ");
			scanf("%f",&mat[i][j]);
		}
	}
	//pedindo o numero N ao usuario.
	printf("informe a coluna que deseja verificar como um numero inteiro: ");
	scanf("%d",&n);
	//calculando quantos primos existe na coluna N.
	for(i=0; i<linhas; i++){//percorrendo as linhas.
		for(j=n-1; j<n; j++){//pegando a coluna -1.
		numero=mat[i][j];//pegando o numero da linha i coluna j.
		numerointeiro=(int)numero;//transformando o numero real em inteiro para comparar.
		for(k=1; k<=numerointeiro; k++){//verificando se o numero eh primo.
			if(numerointeiro%k==0){
				divisores++;
			}
		}
			if(divisores==2){
			contprimos++;
			}
		}
		divisores=0;
	}
	//imprimindo a quantidade de numeros primos da coluna N.
	printf("a coluna %d tem %d primo",n,contprimos);
	
getch();	
} 
