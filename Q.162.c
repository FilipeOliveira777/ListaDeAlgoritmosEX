//162. Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor
//correspondente em binário.
#include<stdio.h>
const int tamanho=10;
void main(){
	int k,n,vet[tamanho],binario,cont=0;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	while(n!=0){
		binario=n%2;
		vet[cont]=binario;
		n=n/2;
		cont++;	
	}
	for(k=cont; k>0; k--){
		printf("%d",vet[k-1]);
	}
	
	getch();
	
	
}
