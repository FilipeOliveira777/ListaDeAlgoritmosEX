//203. Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a
//sua área, que deve ser calculada através de um subprograma.
#include<stdio.h>
//calculando a area.
float calculararea(float base,float altura){
	float area;
	area=(base*altura)/2;
	return area;
}
//fazendo o main.
void main(){
	float base,altura,area;
	printf("informe o valor da base e o valor da altura: ");
	scanf("%f%f",&base,&altura);
	area=calculararea(base,altura);
	printf("A area do triangulo eh: %.2f",area);
getch();	
}

