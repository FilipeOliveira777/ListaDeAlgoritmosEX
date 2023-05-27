//133. Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N
//é o número de elementos impressos na primeira linha. No exemplo abaixo, foi
//considerado que N=5.
//*
//**
//***
//****
//*****
#include<stdio.h>
void main(){
	int k,n,i;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	int m=n;
	for(k=1; k<=n; k++){
		for(i=1; i<=k; i++){
			printf("*");
		}
		printf("\n");
		m--;
		
	}
	
	
	
}
