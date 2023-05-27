//124. Escreva um programa que imprima os seis primeiros pares de números primos
//gêmeos. Dois números são chamados de primos gêmeos se eles forem primos e a
//diferença entre os dois for igual a 2. (Por exemplo, 11 e 13 são primos gêmeos).

#include<stdio.h>
void main(){
	int k,divisores=0,primos=0,i,pANTERIOR=2;
	for(k=2; primos<6; k++){
		 
		for(i=1; i<=k; i++){
			if(k%i==0){
				divisores++;
			}
		}
	
		if(divisores==2){
	       if(k-pANTERIOR==2){
	       	printf("%d e %d\n",pANTERIOR,k);
	       	primos++;
		    }
		    pANTERIOR=k;
		}
		 divisores=0;
	}
getch();

}			
