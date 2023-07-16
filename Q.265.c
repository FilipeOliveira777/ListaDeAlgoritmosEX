/*265. Escreva um subprograma recursivo que receba como entrada um número inteiro N
positivo e calcule o enésimo termo da série de Fibonacci.*/
#include<stdio.h>
//calculando o enesimo termo da sserie fibonacci.
int calcularenesimo(int n){
	if(n==1 || n==2){
	return 1;	
	}
	return calcularenesimo(n-2)+calcularenesimo(n-1);
}
//criando o programa principal(main).
void main(){
	int n;
	printf("Informe um numero inteiro: ");
	scanf("%d",&n);
	int enesimo=calcularenesimo(n);
	printf("O termo %d da serie de fibonacci eh: %d",n,enesimo);
getch();	
}

