//223. Escreva um programa que leia um n�mero inteiro e verifique se ele � par ou �mpar. A
//verifica��o de ser realizada atrav�s de um subprograma.
#include<stdio.h>
//verificando se o numero � par ou impar.
void verificarpar(int n){
	if(n%2==0){
		printf("O numero %d eh par",n);
	}
	else{
		printf("O numero %d eh impar",n);
	}		
}
//fazendo o programa principal(main).
void main(){
	int n;
	printf("Informe um numero inteiro: ");
	scanf("%d",&n);
	verificarpar(n);
getch();	
}
