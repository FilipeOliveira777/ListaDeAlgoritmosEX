//225. Escreva um programa que leia dois números inteiros M e N e verifique se N é
//múltiplo de M. Esta verificação deve ser realizada através de um subprograma.
#include<stdio.h>
//verificando se o numero N é multiplo de M.
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
