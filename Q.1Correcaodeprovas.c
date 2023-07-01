//1. O IFPB precisa de um programa que faça a correção automática das provas do
//seu teste de seleção. A prova, que é a mesma para todos os alunos, consiste de
//dez questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa, que
//deve ser escrito na linguagem C, deve ler o gabarito da prova e, a seguir, as
//opções que aparecem no cartão de respostas de um candidato. Depois disso, o
//programa deve imprimir o número de questões que o candidato acertou.
#include<stdio.h>
const int tamanho=10;
void main(){
	char vetgabarito[tamanho],vetrespostas[tamanho];
	int k,contacertos=0;
	//preenchendo o vetor com o gabarito.
	for(k=0; k<tamanho; k++){
		printf("Informe o gabarito da questao %d: ",k+1);
		scanf("%s",&vetgabarito[k]);
	}
	//pegando as respostas do aluno.
	for(k=0; k<tamanho; k++){
		printf("informe a resposta da questao %d: ",k+1);
		scanf("%s",&vetrespostas[k]);
		if(vetgabarito[k]==vetrespostas[k]){
			contacertos++;
		}
	}
	//printando o numero de questoes que o candidato acertou.
	printf("O candidato acertou %d questoes",contacertos);
	
	
getch();	
}
