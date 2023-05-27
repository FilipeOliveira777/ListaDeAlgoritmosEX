//136. Escreva um programa que leia um número inteiro positivo N e calcule o seu valor
//correspondente em binário.
#include<stdio.h>
void main(){
	int n,resto,binario=0,digito=1;
	printf("informe um numero inteiro:");
	scanf("%d",&n);
	while(n>0){
		resto=n%2;
		binario=binario+resto*digito;
		n=n/2;
		digito=digito*10;
	}
	printf("o valor em binario eh %d",binario);
	getch();
}

