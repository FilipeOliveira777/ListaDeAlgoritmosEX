//202. Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua
//área e o seu comprimento. O programa deve fornecer um subprograma para calcular
//a área e outro para calcular o comprimento. 
#include<stdio.h>
#include<math.h>
const float pi=3.14;
//calculando a area do raio.
float arearaio(float raio){
	float area;
	area=pi*pow(raio,2);
	return area;
}
//calculando o comprimento do raio.
float comprimentoraio(float raio){
	float comprimento;
	comprimento=2*pi*raio;
	return comprimento;
}
//fazendo o main.
void main(){
	float raio;
	printf("Informe o valor do raio da circunferencia: ");
	scanf("%f",&raio);
	float area=arearaio(raio);
	float comprimento=comprimentoraio(raio);
	printf("A area do raio eh %.1f\nO comprimento eh %.1f",area,comprimento);
getch();
}
