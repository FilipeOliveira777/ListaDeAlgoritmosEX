//ler varios numeros e calcular o quadrado.
#include<stdio.h>
#include<math.h>
void main(){
	int n,quadrado;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	
	do{
	quadrado=n*n;
	printf("o quadrado do numero %d eh %d \n",n,quadrado);
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	}
	while(n!=0);
	
	
}

