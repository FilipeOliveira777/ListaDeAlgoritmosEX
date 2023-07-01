//209. Escreva um programa que leia os valores de dois ângulos internos de um triângulo e
//calcule o valor do terceiro ângulo. O cálculo deve ser realizado através de um
//subprograma.
#include<stdio.h>
const int somaangulos=180;
//calculando o valor do terceiro angulo.
float calcularterceiro(float angulo1,float angulo2){
	float angulo3;
	angulo3=somaangulos-angulo1-angulo2;
	return angulo3;
}
//fazendo o programa principal(main).
void main(){
	float angulo1,angulo2,angulo3;
	printf("Informe o valor dos dois angulos do triangulo: ");
	scanf("%f%f",&angulo1,&angulo2);
	angulo3=calcularterceiro(angulo1,angulo2);
	printf("O valor do terceiro angulo da triangulo eh %.2f",angulo3);
getch();	
}
