//204. Escreva um programa que leia o valor de cinco temperaturas em Celsius e, para cada
//valor lido, calcule o seu valor correspondente em Fahrenheit e em Kelvin. Os cálculos
//das conversões devem ser realizados através de subprogramas.
#include<stdio.h>
const int temperatura=5;
//convertendo celsius para fahrenheit.
float converterfahrenheit(float celsius){
	float fahrenheit;
	fahrenheit=(celsius*9/5)+32;
	return fahrenheit;
}
//convertendo celsius para kelvin.
float converterkelvin(float celsius){
	float kelvin;
	kelvin=celsius+273.15;
	return kelvin;
}
//fazendo o programa principal (main).
void main(){
	int k;
	float celsius,fahrenheit,kelvin;
	for(k=0; k<temperatura; k++){
		printf("informe o valor da temperatura em celsius: ");
		scanf("%f",&celsius);
		fahrenheit=converterfahrenheit(celsius);
		kelvin=converterkelvin(celsius);
		printf("O valor da temperatura %.2f celsius em fahenreit eh: %.2f\n",celsius,fahrenheit);
		printf("O valor da temperatura %.2f celsius em kelvin eh: %.2f\n",celsius,kelvin);
	}
getch();
}
