//questao 119
#include<stdio.h>
void main(){
	int n,ultimo=0,proximo=1,penultimo=0;
	printf("informe um numero inteiro");
	  scanf("%d",&n);
	  
	while(proximo<=n){
		penultimo=ultimo;
		ultimo=proximo;
		printf(" %d ",proximo);
		proximo=penultimo+ultimo;
	 
	 
	
	
	}  
	
	getch();
	

	}
