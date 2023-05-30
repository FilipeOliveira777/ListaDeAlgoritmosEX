//125. Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros
//números perfeitos. 
#include<stdio.h>
void main(){
	int n,k,cont=0,soma=0,i=1;
	printf("informe um numero: ");
	scanf("%d",&n);
	while(cont<n){
		soma=0;
		for(k=1; k<i; k++){
			if(i%k==0){
				soma=soma+k;
			}
		}
		if(soma==i){
			printf("%d ",i);
			cont++;
		}
		i++;
	}		
	getch();
		
}

