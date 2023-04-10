#include<stdio.h>
void main(){
	int n,ultimo=0,proximo=1,penultimo=0;
	
	printf("infome um numero inteiro");
	  scanf("%d",&n);
	 
	 while(proximo<n){
	 	penultimo=ultimo;
	 	ultimo=proximo;
	 	proximo=penultimo+ultimo;
	 }   
  	  if(proximo==n){
	 	printf("o numero %d pertence a serie de fibonnaci ",n);
	 	
	 }
	 
	 else {
	 	printf("o numero %d nao pertence a serie de fibonnaci ",n);
	 }
	
	getch();
	
	
	
	
}
