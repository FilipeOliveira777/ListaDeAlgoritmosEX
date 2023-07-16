//260. Escreva um subprograma recursivo que receba como entrada um número inteiro e
//calcule a sua quantidade de algarismos.
#include<stdio.h>
//calculando a quantidade de algarismo do numero.
int calcularalgarismos(int n){
	if(n<10){
		return 1;
	}
	return 1+calcularalgarismos(n/10);
}
//criando o programa principal(main).
void main(){
	int n;
	printf("Informe um numero inteiro: ");
	scanf("%d",&n);
	int algarismos=calcularalgarismos(n);
	printf("O numero %d tem %d de algarismos",n,algarismos);
getch();	
}
