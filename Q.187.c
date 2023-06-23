//187. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
//a seguir leia um número inteiro N e determine a quantidade de números pares
//existente na linha N.
#include<stdio.h>
const int linhas=5;
const int colunas=5;
void main(){
	int i,j,contpares=0,n,k;
	float mat[linhas][colunas],verificarpares=2;
	//preenchendo a matriz.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("informe um numero: ");
			scanf("%f",&mat[i][j]);
		}
	}
	//pedindo o numero inteiro N ao usuario.
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	//verificando os pares da linha N.
	for(i=n-1; i<n; i++){
		for(j=0; j<colunas; j++){
			 float numero = mat[i][j];
            int numeroInteiro = (int)numero;
			if(numeroInteiro%2==0){
				contpares++;
			}
		}
	}
	//imprimindo a quantidade de pares existentes na linha N.
	printf("na linha %d existe %d de numeros pares",n,contpares);
getch();
}
