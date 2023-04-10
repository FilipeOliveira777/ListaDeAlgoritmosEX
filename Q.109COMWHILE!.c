//109. Escreva um programa que leia dois números inteiros M e N e um número inteiro X e
//imprima todos os divisores exatos de X existentes no intervalo [M, N].USANDO WHILE!!!
#include<stdio.h>
void main(){
	int k,m,n,x;
	printf("informe o primeiro numero do intervalo:");
	   		scanf("%d",&m);
	printf("informe o segundo numero do intervalo:");
			scanf("%d",&n);
	printf("informe o numero X:");
			scanf("%d",&x);		
	           k=m;
		while(k<=n){
			if(x%k==0){
			printf(" %d ",k);
			}
			k++;
		}	   		
	     
		 
	getch();	

}
