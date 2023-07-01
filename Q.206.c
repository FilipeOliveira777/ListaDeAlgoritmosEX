//206. Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e
//calcule o valor da hipotenusa. O cálculo deve ser realizado através de um
//subprograma.
#include<stdio.h>
#include<math.h>
//calculando a hipotenusa.
float calcularhipotenusa(float cateto1,float cateto2){
	float hipotenusa,hipotenusacalculada;
	hipotenusa=pow(cateto1,2)+pow(cateto2,2);
	hipotenusacalculada=sqrt(hipotenusa);
	return hipotenusacalculada;
}
//fazendo o programa principal(main).
void main(){
	float cateto1,cateto2,hipotenusa;
	printf("Informe o valor dos dois catetos: ");
	scanf("%f%f",&cateto1,&cateto2);
	hipotenusa=calcularhipotenusa(cateto1,cateto2);
	printf("A hipotenusa do triangulo retangulo eh %.2f",hipotenusa);
getch();	
}
