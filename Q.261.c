//261. Escreva um subprograma recursivo que receba como entrada um número inteiro e
//calcule a soma de todos os seus algarismos. 
#include<stdio.h>
//calculando a soma dos algarimos do numero.
int calcularsomaalgarismo(int n){
	if(n==0){
		return n;
	}
 return	(n%10)+calcularsomaalgarismo(n/10);
}
//criando o programa principal(main).
void main(){
	int n;
	printf("Informe um numero inteiro: ");
	scanf("%d",&n);
	int somaalgarismos=calcularsomaalgarismo(n);
	printf("A soma dos algarismos do numero %d eh: %d",n,somaalgarismos);
getch();	
}
