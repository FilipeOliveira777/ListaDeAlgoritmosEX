//112. Escreva um programa que leia um número inteiro N e imprima o enésimo termo da
//série de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...).
#include<stdio.h>
void main(){
	int k,n,ultimo=0,proximo=1,penultimo=1;
	 printf("informe um numero inteiro: ");
	 		scanf("%d",&n);
	 for(k=1; k<n; k++){
	 	penultimo=ultimo;
	 	ultimo=proximo;
	 	proximo=ultimo+penultimo;	
	 }		
	 printf("o enesimo termo da serie eh %d",proximo);
	 
	 		
	getch();
	
	
}

