//224. Escreva um programa que leia um n�mero inteiro e determine o seu valor absoluto.
//O valor absoluto deve ser calculado atrav�s de um subprograma (sem usar qualquer
//subprograma fornecido pela linguagem de programa��o).
#include<stdio.h>
//calculando o valor absoluto do numero.
int calcularabsoluto(int n){
	if(n>=0){
	return n;	
	}
	else{
		return n*-1;
	}
}
//fazendo o programa principal(main).
void main(){
	int n;
	printf("Informe um numero inteiro: ");
	scanf("%d",&n);
	int absoluto=calcularabsoluto(n);
	printf("O valor absoluto do numero %d eh: %d",n,absoluto);
getch();
}
