//120. Escreva um programa que leia um n�mero inteiro positivo N e imprima a maior
//quantidade poss�vel de n�meros inteiros positivos de forma que a soma de todos os
//n�meros impressos seja menor ou igual a N.

#include<stdio.h>
void main(){
	int k=1,n,soma=0;
	printf("informe um numero inteiro: ");
	   scanf("%d",&n);
	   while(soma+k<=n){
	   	printf(" %d ",k);
	     soma=soma+k;
	   	  k++;
	   }
getch();		
}

