//218. Escreva um programa que leia um valor em segundos e converta para a forma X
//horas Y minutos e Z segundos. Por exemplo, o valor 3670 equivale a 1 hora 1 minutos
//e 10 segundos. O programa deve ter: um subprograma para calcular o valor das
//horas, um subprograma para calcular o valor dos , um subprograma para calcular o
//valor dos segundos e um subprograma para imprimir o resultado final.
#include<stdio.h>
//calculando as hora.
int calcularhora(int segundos){
	int hora;
	hora=segundos/3600;
	return hora;
}
//calculando os minutos.
int calcularminutos(int segundos){
	int minutos = (segundos % 3600) / 60;
	return minutos;
}
//calculando os segundos.
int calcularsegundos(int segundos){
	int segundoscalculados = (segundos % 3600) % 60;
	return segundoscalculados;
}
//imprimindo o resultado final.
void imprimir(int hora,int minutos,int segundoscalculados){
	printf("O valor em hora eh %d\nEm minutos eh %d\nEm segundos eh %d",hora,minutos,segundoscalculados);
}
//fazendo o programa principal(main).
void main(){
	int hora,minutos,segundos,segundoscalculados;
	printf("Informe o valor dos segundos: ");
	scanf("%d",&segundos);
	hora=calcularhora(segundos);
	minutos=calcularminutos(segundos);
	segundoscalculados=calcularsegundos(segundos);
	imprimir(hora,minutos,segundoscalculados);
getch();	
}
