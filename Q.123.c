//123. Escreva um programa que leia dois números inteiros M e N e calcule os N primeiros
//números primos maiores ou iguais a M.

#include<stdio.h>
void main(){
	int k,n,m,divisores=0,i,primo=0;
	printf("informe os dois numeros inteiros: ");
	 scanf("%d %d",&m,&n);
	 for(k=m; primo<n; k++){
	 	for(i=1; i<=k; i++){
	 	if(k%i==0){
	 		divisores++;
		 }
		}
	 	if (divisores==2){
		  printf(" %d ",k);
		  primo++;	
		 }
		 divisores=0;
	   }
    getch();
	}
