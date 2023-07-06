//220. Escreva um programa que leia o peso e a altura de uma pessoa e determine o seu
//índice de massa corporal, que deve ser calculado através de um subprograma.
#include<stdio.h>
#include<math.h>
//calculando o imc.
float calcularimc(float peso,float altura){
	float imc;
	imc=peso/(altura*altura);
	return imc;
}
//criando o programa principal(main).
void main(){
	float peso,altura,imc;
	printf("Informe o peso e a altura: ");
	scanf("%f %f",&peso,&altura);
	imc=calcularimc(peso,altura);
	printf("O imc eh: %.2f",imc);
getch();	
}
