//240. Escreva um programa que leia um número inteiro entre 1 e 10 e imprima o número
//lido por extenso. Esta tarefa deve ser realizada através de um subprograma.
#include<stdio.h>
//imprimindo o valor do numero por extenso.
void imprimirn(int n){
	if(n==1){
		printf("Um");
	}
	if(n==2){
		printf("Dois");
	}
	if(n==3){
		printf("Tres");
	}
	if(n==4){
		printf("Quatro");
	}
	if(n==5){
		printf("Cinco");
	}
	if(n==6){
		printf("Seis");
	}
	if(n==7){
		printf("Sete");
	}
	if(n==8){
		printf("Oito");
	}
	if(n==9){
		printf("Nove");
	}
	if(n==10){
		printf("Dez");
	}
}
//criando o programa principal(main).
void main(){
	int n;
	printf("Informe um numero inteiro entre 1 e 10: ");
	scanf("%d",&n);
	imprimirn(n);
getch();
}
