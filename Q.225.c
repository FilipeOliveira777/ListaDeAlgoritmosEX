//225. Escreva um programa que leia dois n�meros inteiros M e N e verifique se N �
//m�ltiplo de M. Esta verifica��o deve ser realizada atrav�s de um subprograma.
#include<stdio.h>
//verificando se o numero N � multiplo de M.
int verificarmultiplo(int n, int m){
	if(n%m==0){
		return 1;
	}
	else{
		return 0;
	}
}
//fazendo o programa principal(main).
void main(){
	int n,m;
	printf("Informe dois numeros inteiros: ");
	scanf("%d%d",&n,&m);
	if(verificarmultiplo(n,m)==1){
		printf("O numero %d eh multiplo do %d",n,m);
	}
	else{
	printf("O numero %d nao eh multiplo do %d",n,m);
	}
getch();	
}
