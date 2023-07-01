//205. Escreva um programa que leia o valor de uma distância percorrida em km e o tempo
//gasto em horas e calcule a velocidade média em m/s. A conversão deve ser realizada
//através de um subprograma.
#include<stdio.h>
//calculando a velocidade media.
float calcularvm(float distancia,float tempo){
	float velocidademedia;
	velocidademedia=(distancia * 1000) / (tempo * 3600);
	return velocidademedia;
}
//fazendo o programa principal (main).
void main(){
	float distancia,tempo,velocidademedia;
	printf("Informe a distacia percorrida e o tempo gasto: ");
	scanf("%f%f",&distancia,&tempo);
	velocidademedia=calcularvm(distancia,tempo);
	printf("A velocidade media foi de %.2f",velocidademedia);
getch();	
}
