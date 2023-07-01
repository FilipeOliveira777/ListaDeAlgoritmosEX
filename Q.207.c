//207. Escreva um programa que leia um valor em polegadas e o converta para centímetros,
//considerando que uma polegada equivale a 2.54 cm. A conversão deve ser realizada
//através de um subprograma.
#include<stdio.h>
const float centimetroconstante=2.54;
//convertendo a polegada para centimetros.
float converterpolegada(float polegadas){
	float centimetros;
	centimetros=polegadas*centimetroconstante;
	return centimetros;
}
//fazendo o programa principal(main).
void main(){
	float polegadas,centimetros;
	printf("Informe o valor em polegadas: ");
	scanf("%f",&polegadas);
	centimetros=converterpolegada(polegadas);
	printf("O valor %.2f em centimetros eh: %.2f",polegadas,centimetros);	
getch();	
}
