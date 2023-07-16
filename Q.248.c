//248. Escreva um programa que leia um valor real a ser sacado pelo usuário e identifique
//quantas cédulas de cada tipo devem ser usadas para que o saque seja efetuado. Você
//pode supor que o caixa tem cédulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O
//valor máximo de um saque é R$ 1000,00 e, para cada saque, deve ser dada
//prioridade para as células maiores. A verificação deve ser realizada através de um
//subprograma.
#include<stdio.h>
//calculando as cedulas.
void calcularcedulas(int saque){
	int cedula10=0,cedula20=0,cedula50=0,cedula100=0;
	if(saque>=100){
	cedula100=saque/100;
	printf("Foi sacado %d cedulas de 100\n",cedula100);
	saque=saque%100;	
	}
	if(saque>=50){
		cedula50=saque/50;
		printf("Foi sacado %d cedulas de 50\n",cedula50);
		saque=saque%50;
	}
	if(saque>=20){
		cedula20=saque/20;
		printf("Foi sacado %d cedulas de 20\n",cedula20);
		saque=saque%20;
	}
	if(saque>=10){
		cedula10=saque/10;
		printf("Foi sacado %d cedulas de 10\n",cedula10);
		saque=saque%10;
	}
} 
//criando o programa principal(main).
void main(){
	float saque;
	printf("Informe o valor do saque: ");
	scanf("%f",&saque);
	calcularcedulas(saque);
getch();	
}
