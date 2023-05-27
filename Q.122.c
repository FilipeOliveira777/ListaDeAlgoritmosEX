//122. Escreva um programa que leia um número inteiro N e verifique se ele pertence à série
//de Fibonacci.

#include<stdio.h>
void main(){
	int k,n,ultimo=0,proximo=1,penultimo=0;
	printf("informe um numero inteiro: ");
	  scanf("%d",&n);
	  for(k=1; proximo<n; k++){
	  	penultimo=ultimo;
	  	ultimo=proximo;
	  	proximo=ultimo+penultimo;
		}
		  if(proximo==n){
		  	printf("o numero %d pertence a sequencia",n);
		  	
		   }
		   else{
		   	printf("o numero %d nao pertence a sequencia",n);
		   	
		   } 	
	
	getch();
	
	
	
}
