//117. Escreva um programa que leia 10 n�meros inteiros e, para cada n�mero lido, calcule o
//seu fatorial.

#include<stdio.h>
void main(){
	int k,n,i,fatorial;
	for(i=1; i<=10; i++){
	printf("informe um numero:");
	      scanf("%d",&n);
	      fatorial=1;
	for(k=1; k<=n; k++){
	 	fatorial=fatorial*k;
   	 }     
   	printf("fatorial do numero %d eh %d\n ",n,fatorial);
   		      
	}    		
	
	
	getch();
}
