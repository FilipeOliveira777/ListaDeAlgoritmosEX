//1. O IFPB precisa de um programa que fa�a a corre��o autom�tica das provas do
//seu teste de sele��o. A prova, que � a mesma para todos os alunos, consiste de
//dez quest�es objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa, que
//deve ser escrito na linguagem C, deve ler o gabarito da prova e, a seguir, as
//op��es que aparecem no cart�o de respostas de um candidato. Depois disso, o
//programa deve imprimir o n�mero de quest�es que o candidato acertou.
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
