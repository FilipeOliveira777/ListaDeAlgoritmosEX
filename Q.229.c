//229. Escreva um programa que leia os valores dos tr�s lados de um tri�ngulo e o
//classifique como equil�tero, is�sceles ou escaleno. Esta verifica��o deve ser realizada
//atrav�s de um subprograma.
#include<stdio.h>
//classificando o triangulo.
void classificartriangulo(float lado1,float lado2,float lado3){
	if(lado1==lado2 && lado2==lado3){
		printf("O triangulo eh equilatero");
	}
	else if(lado1==lado2 || lado2==lado3 || lado1==lado3){
		printf("O triangulo eh isosceles");
	}
	else if(lado1!=lado2 && lado2!=lado3 && lado1!=lado3){
		printf("O triangulo eh escaleno");
	}
}
//criando o programa principal(main).
void main(){
	float lado1,lado2,lado3;
	printf("Informe os tres lados do triangulo: ");
	scanf("%f%f%f",&lado1,&lado2,&lado3);
	classificartriangulo(lado1,lado2,lado3);
getch();	
}
