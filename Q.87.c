//87. Escreva um programa que leia um caractere correspondente ao estado civil de uma
//pessoa e imprima o estado civil informado por extenso. As opções para o estado civil
//são: S (solteiro), C (casado), D (divorciado) e V (viúvo).

#include<stdio.h>
#include<string.h>
void main(){
	char caractere;
	printf("informe o primeiro caractere do estado civil: ");
	       scanf("%c",&caractere);
	   if(caractere=='s'){
	  printf ("solteiro");
		}
		else if(caractere=='c'){
				printf("casado");
	        }
	       
		else if(caractere=='d'){
			printf("divorciado");
	        }
	    else{
	    	printf("viuvo");
		}      
	        
	 getch();
	
}
