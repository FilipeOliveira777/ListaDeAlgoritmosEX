//120. Escreva um programa que leia um número inteiro positivo N e imprima a maior
//quantidade possível de números inteiros positivos de forma que a soma de todos os
//números impressos seja menor ou igual a N.

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

