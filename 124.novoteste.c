//124.Escreva um programa que imprima os seis primeiros pares de números primos
//gêmeos. Dois números são chamados de primos gêmeos se eles forem primos e a
//diferença entre os dois for igual a 2. (Por exemplo, 11 e 13 são primos gêmeos).
#include<stdio.h>
void main(){
	int k,primo=2,cont=0,primoatual=2,contprimo=0;
	while(cont<6){
		for(k=1; k<=primo; k++){
			if(primo%k==0){
				contprimo++;
			}
		}			
		if(contprimo==2){
			if(primo-primoatual==2){
		printf("%d e %d\n",primoatual,primo);
			cont++;	
		    }		
         primoatual=primo; 
		}	
			contprimo=0;
			primo++;
		}
		
	getch();
		
}
