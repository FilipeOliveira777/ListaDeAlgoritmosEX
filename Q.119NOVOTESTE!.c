//119. Escreva um programa que leia um n�mero inteiro N e imprima todos os termos da
//s�rie de Fibonacci que s�o menores ou iguais a N.

#include<stdio.h>
void main(){
	int k,ultimo=0,penultimo=0,proximo=1,n;
	printf("informe um numero inteiro: ");
	    scanf("%d",&n);
	    for(k=1; k<=n; k++){
	    	penultimo=ultimo;
	    	ultimo=proximo;
	    	if(proximo<=n){
			printf(" %d ",proximo);
			proximo=ultimo+penultimo;
			}	
		}
	getch();	
}
