//145. Escreva um programa que leia um número inteiro N e, a seguir leia vários números
//inteiros. O processo de leitura deve ser encerrado quando a soma dos números
//digitados pelo usuário (excluindo-se o valor de N) for superior ao valor de N.
#include<stdio.h>
void main(){
	int k,n,soma=0,num;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	while(soma<=n){
		printf("informe um numero inteiro: ");
		scanf("%d",&num);
		soma=soma+num;
	}
	printf("A soma dos numeros foi %d e eh maior que o numero %d",soma,n);
getch();
}
