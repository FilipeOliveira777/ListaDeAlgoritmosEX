//221. Escreva um programa que leia um número inteiro entre 0 e 999 e calcule o seu
//reverso. Você deve sempre considerar que o número lido tem três algarismos. Desta
//forma, o reverso de 195 deve ser 591, o de 768 deve ser 867, de 3 deve ser 300, o de
//40 deve ser 40, o de 500 deve ser 5, e assim sucessivamente. O programa deve
//armazenar o valor do reverso em uma variável antes de exibi-lo para o usuário. O
//valor do reverso deve ser calculado através de um subprograma.
#include<stdio.h>
//calculando o reverso do numero.
void calcularreverso(int n){
	int centena,dezena,unidade,reverso;
	centena=(n%1000)/100;
	dezena=(n%100)/10;
	unidade=(n%10)/1;
	printf("%d%d%d",unidade,dezena,centena);
}
//criando o programa principal(main).
void main(){
	int n,reverso;
	printf("Informe um numero inteiro: ");
	scanf("%d",&n);
	calcularreverso(n);
getch();	
}
