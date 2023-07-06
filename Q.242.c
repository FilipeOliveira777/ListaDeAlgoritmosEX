//242. Escreva um programa que leia dois operandos inteiros e um operador (+, -, *, /) e
//aplique o operador lido aos dois operandos, na ordem em que os mesmos foram
//digitados. Esta verificação deve ser realizada através de um subprograma.
#include<stdio.h>
#include<stdlib.h>
//aplicando o operador lido.
int calcularoperador(int n1, int n2, char operador){
	int soma=0,subtracao=0,multiplicacao=0,divisao=0;
	switch(operador){
	case '+':
		soma=n1+n2;
		return soma;
		break;
		
	case '-':
		subtracao=n1-n2;
		return subtracao;
		break;

	case '*':
		multiplicacao=n1*n2;
		return multiplicacao;
		break;
	
	case '/':
		divisao=n1/n2;
		return divisao;
		break;
	}
}
//criando o programa principal(main).
void main(){
	int n1,n2,operacao;
	char operador;
	printf("Informes os dois operandos: ");
	scanf("%d%d",&n1,&n2);
	printf("Informe um operador: ");
	scanf(" %c",&operador);
	fflush(stdin);
	operacao=calcularoperador(n1, n2, operador);
	printf("O resultado da operacao desejada foi: %d",operacao);
getch();	
}
