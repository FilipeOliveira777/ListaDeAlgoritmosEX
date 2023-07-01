#include<stdio.h>
const int tamanho=10;
void main(){
	char vetgabarito[tamanho],vetrespostas[tamanho];
	int k,contacertos=0;
	//preenchendo o vetor com o gabarito.
	for(k=0; k<tamanho; k++){
		printf("Informe o gabarito da questao %d: ",k+1);
		scanf("%c",&vetgabarito[k]);
		fflush(stdin);
	}
	//pegando as respostas do aluno.
	for(k=0; k<tamanho; k++){
		printf("informe a resposta da questao %d: ",k+1);
		scanf("%c",&vetrespostas[k]);
		fflush(stdin);
	}
	//calculando as respostas do candidato.
	for(k=0; k<tamanho; k++){
		if(vetgabarito[k]==vetrespostas[k]){
			contacertos++;
		}
	}
	//printando o numero de questoes que o candidato acertou.
	printf("O candidato acertou %d questoes",contacertos);
	
	
getch();	
}
