//241. Escreva um programa que leia o peso e a altura de uma pessoa e verifique se ela está
//dentro da faixa de peso adequada, ou se está abaixo ou acima do peso. Caso a
//pessoa esteja fora do peso adequado o programa deve informar quantos Kg ela deve
//ganhar ou perder para ficar dentro da faixa adequada. Para resolver este programa,
//considere que o IMC ideal para uma pessoa deve estar entre 18 e 25. O programa
//deve ter um subprograma para calcular o IMC, um subprograma para verificar a
//situação da pessoa, um subprograma para calcular quantos quilos ela precisa perder
//e um subprograma para calcular quantos quilos ela precisa ganhar.
#include<stdio.h>
#include<math.h>
//calculando o imc da pessoa.
float calcularimc(float peso, float altura){
	float imc;
	imc=peso/pow(altura,2);
	return imc;
}
//verificando a situação da pessoa.
void verificarsituacao(float imc){
	if(imc>=18 && imc<=25){
		printf("Voce esta dentro da faixa de peso adequada\n");
	}
	if(imc<18){
		printf("Voce esta abaixo da faixa de peso adequada\n");
	}
	if(imc>25){
		printf("Voce esta acima da faixa de peso adequada\n");
	}
}
//calculando quantos kilos a pessoa deve perder.
float calcularperda(float altura,float peso,float imc){
	float pesoperda,pesoideal;
	pesoideal=24.9*pow(altura,2);
	pesoperda=pesoideal-imc;
	return pesoperda;
}
//calculando quantos kilos a pessoa deve ganhar.
float calcularganharpeso(float peso, float altura,float imc){
	float ganharpeso,pesoideal;
	pesoideal=18.5*pow(altura,2);
	ganharpeso=imc-pesoideal;
	return ganharpeso;
} 
//criando o programa principal(main).
void main(){
	float altura,peso,imc,pesoperda,ganharpeso,situacao;
	printf("Informe o peso e a altura: ");
	scanf("%f%f",&peso,&altura);
	imc=calcularimc(peso,altura);
	verificarsituacao(imc);
	if(imc>25){
		pesoperda=calcularperda(peso,altura,imc);
		printf("Voce precisa perder: %.2f",pesoperda);
	}
	if(imc<18){
		ganharpeso=calcularganharpeso(peso,altura,imc);
		printf("Voce precisa ganhar: %.2f",ganharpeso);
	}
getch();	
}
