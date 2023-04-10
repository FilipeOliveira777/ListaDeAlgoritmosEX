//110. Escreva um programa que leia um número natural N e calcule o seu fatorial.
#include<stdio.h>
void main(){
	int k,n,fatorial=1;
	  printf("informe um numero: ");
	      scanf("%d",&n);
	 for(k=1; k<=n; k++){
	 	fatorial=fatorial*k;
   	 }     
   		printf("fatorial do numero %d eh %d",n,fatorial);		
	
	
	getch();
	
}

