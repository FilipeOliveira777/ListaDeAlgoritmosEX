//140. Escreva um programa que leia v�rios n�meros inteiros e calcule a m�dia dos
//n�meros pares e a m�dia dos n�meros �mpares. O processamento dever� ser
//encerrado quando for lido o valor 0, que n�o dever� ser processado. 
#include<stdio.h>
void main(){
	int k,n,m,somapar=0,somaimpar=0,contpar=0,contimpar=0;
	float mediaimpar,mediapar;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	while(n!=0){
		if(n%2==0){
			contpar++;
			somapar=somapar+n;
		}
		else if(n%2!=0){
			contimpar++;
			somaimpar=somaimpar+n;
			
		}
		printf("informe um numero inteiro: ");
	       scanf("%d",&n);
	}
	if(contpar!=0){
		mediapar=somapar/(float)contpar;
	}
	else{
		mediapar=0;
	}
	if(contimpar!=0){
	mediaimpar=somaimpar/(float)contimpar;
	}
	else{
		mediaimpar=0;
	}
	printf("a media dos numeros impar sao %.2f e a media dos pares sao %.2f",mediaimpar,mediapar);	
	
}
