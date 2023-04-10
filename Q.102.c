//Q.102. Escreva um programa que leia um número inteiro N e imprima todos os seus divisores exatos.
#include<stdio.h>
void main(){
	int n,divisores,k;
	   printf("informe um numero inteiro");
	       scanf("%d",&n);  
	for (k=1; k<=n; k++){
		divisores=n/k;
	   if(n%k==0){
	   	printf(" %d ",k);
	   	
	   }		
		
	}	    
	
	getch();
	
	
	
	
	
}
