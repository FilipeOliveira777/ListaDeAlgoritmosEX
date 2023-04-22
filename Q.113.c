//113. Escreva um programa que leia dois números inteiros M e N e imprima todos os
//números primos existentes no intervalo [M, N].
#include<stdio.h>
void main(){
    int k,m,n,contprimo=0,i;
       printf("informe o primeiro numero do intervalo:");
              scanf("%d",&m);
        printf("informe o segundo numero do intervalo:");
		       scanf("%d",&n);
		for(k=m; k<=n; k++){
			contprimo=0;
		for(i=1; i<=k; i++){
		if(k%i==0){
		 contprimo++;
		 }
		  
		  }
		if(contprimo==2){
			printf(" %d ",k);
		}	         
       
	   }
	getch();
	
	
	
}
