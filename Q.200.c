//200. Escreva um programa que leia o valor do lado de um quadrado e calcule a sua �rea e
//o seu per�metro. O programa deve ter um subprograma para calcular a �rea e outro
//para calcular o per�metro.
#include<stdio.h>
int areaquadrado(int lado){
 int area;
 area=lado*lado;
 return area;	
}
int perimetroquadrado(int lado){
	int perimetro;
	perimetro=4*lado;
	return perimetro;
}
void main(){
	int lado,perimetrodoquadrado,areadoquadrado;
	printf("informe o lado do quadrado: ");
	scanf("%d",&lado);
	areadoquadrado=areaquadrado(lado);
	perimetrodoquadrado=perimetroquadrado(lado);
	printf("A area do quadrado eh %d e o perimetro eh %d",areadoquadrado,perimetrodoquadrado);
}
