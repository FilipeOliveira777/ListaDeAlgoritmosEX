//209. Escreva um programa que leia os valores de dois �ngulos internos de um tri�ngulo e
//calcule o valor do terceiro �ngulo. O c�lculo deve ser realizado atrav�s de um
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
