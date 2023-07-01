//211. Escreva um programa que leia o valor do raio de uma esfera e determine o seu
//volume. O cálculo deve ser realizado através de um subprograma.
#include<stdio.h>
#include<math.h>
const float pi=3.14159;
//calculando o valor do volume da esfera.
float calcularvolume(float raio){
	float volume;
	volume=(4.0/3.0)*pi*pow(raio,3);
	return volume;
}
//fazendo o programa principal(main).
void main(){
	float raio,volume;
	printf("Informe o valor do raio da esfera: ");
	scanf("%f",&raio);
	volume=calcularvolume(raio);
	printf("O volume da esfera eh: %.2f",volume);
getch();
}
