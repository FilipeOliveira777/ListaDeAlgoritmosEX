//226. Escreva um programa que leia um número inteiro e verifique se ele é positivo,
//negativo ou neutro. Esta verificação deve ser realizada através de um subprograma.
#include<stdio.h>
//verificando se o numero é positivo, negativo ou neutro.
void verificarnum(int n){
	if(n>0){
		printf("O numero %d eh positivo",n);
	}
	else if(n<0){
		printf("O numero %d eh negativo",n);
	}
	else{
		printf("O numero %d eh neutro",n);
	}
}
//criando o programa principal(main).
void main(){
	int n;
	printf("Informe um numero inteiro: ");
	scanf("%d",&n);
	verificarnum(n);
getch();	
}
