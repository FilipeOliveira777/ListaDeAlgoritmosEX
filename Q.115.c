//115. Escreva um programa que leia o peso e a altura de um grupo de 20 pessoas e calcule o
//percentual de pessoas abaixo do peso, o percentual de pessoas acima do peso e o
//percentual de pessoas que estão dentro da faixa de peso adequada.
#include<stdio.h>
#include<math.h>
const float imcmax=25;
const float imcmin=18;
const int pessoas=2;
void main(){
	float peso,altura;
	int k;
	int ideal=0;
	int abaixo=0;
	int acima=0;
		for(k=1; k<=pessoas; k++){
		printf("informe a altura: ");
	     	scanf("%f",&altura);
	  	printf("informe o peso: ");
	    	scanf("%f",&peso);
	    	
			float imc= peso/pow(altura,2);
	    	
			if(imc>=imcmin && imc<=imcmax){
				ideal++;			   	
			}
			else if(imc<imcmin){
	    	   	abaixo++;
	    
			}
			
			else if(imc>imcmax){
				acima++;
			}
		}	   
	        float percentualabaixo=(abaixo*100)/pessoas;
			float percentualacima=(acima*100)/pessoas;
			float percentualideal=(ideal*100)/pessoas;	
	
	printf("o percentual de pessoas acima do peso eh %.2f, abaixo eh %.2f, ideal eh %.2f",percentualacima,percentualabaixo,percentualideal);
	
	getch(); 
}
