//219. Escreva um programa que leia o valor total que um cliente consumiu em um
//restaurante e determine o valor final da sua conta, considerando que o restaurante
//cobra uma taxa de serviço de 10 % e uma taxa de couvert artístico de R$ 10,00. A
//conta deve ser calculada através de um subprograma.
#include<stdio.h>
const float taxacover=10;
const float taxa=0.1;
//calculado o valor total gasto.
float calculartotal(float valorconsumo){
	float valorfinal,valordataxa;
	valordataxa=valorconsumo*taxa;
	valorfinal=valordataxa+valorconsumo+taxacover;
	return valorfinal;
}
//criando o programa principal(main).
void main(){
	float valorconsumo,valorfinal;
	printf("Informe o valor consumido: ");
	scanf("%f",&valorconsumo);
	valorfinal=calculartotal(valorconsumo);
	printf("O valor final da sua conta foi: %.2f",valorfinal);
getch();	
}

