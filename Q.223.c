//223. Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar. A
//verificação de ser realizada através de um subprograma.
#include<stdio.h>
//verificando se o numero é par ou impar.
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
