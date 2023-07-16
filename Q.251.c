//251. Escreva um subprograma recursivo que receba como entrada um número inteiro não
//negativo e calcule o seu fatorial.
#include<stdio.h>
//calculando o fatorial.
int calcularfatorial(int n){
	if(n==1){
	return 1;
	}
	return n*calcularfatorial(n-1);
}
//criando o programa principal(main).
void main(){
	int n,fatorial;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	fatorial=calcularfatorial(n);
	printf("O fatorial do numero %d eh %d",n,fatorial);
getch();
}	
