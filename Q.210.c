//210. Em uma determinada cidade, cada m2 de um terreno est� avaliado em R$ 50,00.
//Escreva um programa que leia o comprimento e a largura de um terreno localizado
//nesta cidade e calcule o seu valor de mercado. O c�lculo deve ser realizado atrav�s
//de um subprograma, que deve receber como entrada o comprimento e a largura do
//terreno.
#include<stdio.h>
const float valorcadam2=50.00;
//calculando o o valor de mercado do terreno.
float calcularterreno(float comprimento,float largura){
	float valorterreno,valorm2;
	valorterreno=comprimento*largura;
	valorm2=valorterreno*valorcadam2;
	return valorm2;
}
//fazendo o programa principal(main).
void main(){
	float comprimento,largura,valorm2;
	printf("informe o comprimento e a largura do terreno: ");
	scanf("%f%f",&comprimento,&largura);
	valorm2=calcularterreno(comprimento,largura);
	printf("O valor de mercado do terreno eh: %.2f",valorm2);
getch();
}
