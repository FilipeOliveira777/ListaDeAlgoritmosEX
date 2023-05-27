//123. Escreva um programa que leia dois números inteiros M e N e calcule os N primeiros
//números primos maiores ou iguais a M. COM WHILEE!!

#include<stdio.h>
void main(){
	int k,m,n,primos=0,divisores=0;
	printf("informe os dois numeros inteiros: ");
	   scanf("%d %d",&m,&n);
	   while(primos<n){
	   	for(k=1; k<=m; k++){
	   		if(m%k==0){
	   			divisores++;
			   }
			   
		}  
			if(divisores==2){
				printf(" %d ",m);
				primos++;
			}   
		   m++;
		   divisores=0;
		}
	   	getch();
	
	
	
}
