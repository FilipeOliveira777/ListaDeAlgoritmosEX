//118. Escreva um programa que leia um n�mero N e imprima os N primeiros n�meros
//primos positivos.

#include<stdio.h>
void main(){
	int k,n,i,contprimo=0,cont=0;
	printf("informe um numero inteiro: ");
	  scanf("%d",&n);
	for(k=1; cont<n; k++){
		contprimo=0;
		for(i=1; i<=k; i++){
		   if(k%i==0){
			contprimo++;
			}	
		}
		if(contprimo==2){
		printf("%d ",k);
		cont++;
		}	
	}  
	getch();	
	
	
	
}
