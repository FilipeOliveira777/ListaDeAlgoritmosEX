//253. Escreva um subprograma recursivo que receba como entrada um n�mero inteiro N
//positivo e provoque um salto de N linhas na tela do usu�rio.
#include<stdio.h>
//provocando um salto de N linhas.
void saltarlinhas(int n){
	if(n==0){
	return;
	}
	printf("\n");
	saltarlinhas(n-1);
}
//criando o programa principal(main).
void main(){
	int n;
	printf("Informe um numero inteiro: ");
	scanf("%d",&n);
	saltarlinhas(n);
getch();		
}
