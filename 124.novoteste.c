//124.Escreva um programa que imprima os seis primeiros pares de n�meros primos
//g�meos. Dois n�meros s�o chamados de primos g�meos se eles forem primos e a
//diferen�a entre os dois for igual a 2. (Por exemplo, 11 e 13 s�o primos g�meos).
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
