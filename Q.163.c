//163. O IFPB precisa de um programa que fa�a a corre��o autom�tica das provas do seu
//teste de sele��o. A prova, que � a mesma para todos os alunos, consiste de dez
//quest�es objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o
//gabarito da prova e, a seguir, o nome de um candidato e as op��es que aparecem no
//seu cart�o de respostas. Para cada candidato, o programa deve imprimir o seu
//percentual de acertos. O processamento deve ser encerrado quando for encontrado
//um candidato com o nome �fim�, que n�o deve ser processado. O programa deve
//imprimir tamb�m a pontua��o m�dia dos candidatos.
#include<stdio.h>
#include<string.h>
const int tamanho=10;
void main(){
	char vetgboficial[tamanho],nome[100],fim[4],vetgbalunos[tamanho];
	int k,soma=0,contacertos=0,contalunos=0;
	float percentualacertos,pontuacaomedia;
	for(k=0; k<tamanho; k++){
		printf("informe o gabarito de resposta da questao %d: ",k+1);
		scanf("%s",&vetgboficial[k]);
	}
	printf("informe o nome do aluno: ");
	scanf("%s",nome);
	
	while(strcmp(nome, "fim") != 0){
		contalunos++;
		for(k=0; k<tamanho; k++){
			printf("informe a resposta da questao %d: ",k+1);
			scanf("%s",&vetgbalunos[k]);
			if(vetgbalunos[k]==vetgboficial[k]){
			contacertos++;
			}
		}
	soma=soma+contacertos;
	percentualacertos=((float)contacertos/(float)tamanho)*100;
	printf("o percentual de acertos do aluno %s foi de %.1f %%",nome,percentualacertos);
	printf("\ninforme o nome do aluno: ");
	scanf("%s",nome);
	contacertos=0;
	}
	pontuacaomedia=(float)soma/(float)contalunos;
	printf("\na pontuacao media dos alunos foi %.1f %% ",pontuacaomedia);
	getch();
}	
