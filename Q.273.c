/*273. Escreva um subprograma recursivo que receba como entrada um string contendo a
sequ�ncia de resultados de um time e calcule a sua pontua��o, considerando que V
representa vit�ria e vale 3 pontos, E representa empate e vale um ponto e D
representa derrota e n�o vale qualquer ponto. Por exemplo, se a entrada do
programa for VVVEEDDVED, a pontua��o do time � 15.*/
#include<stdio.h>
const int vitoria=3;
const int empate=1;
const int derrota=0;
//verificando a pontua��o do time.
int verificarpontuacao(char resultado){
	if(resultado=='d' || resultado=='D'){
		return 0;
	}
	if(resultado=='v' || resultado=='V'){
	return 3+verificarpontuacao(resultado);
	}
	if(resultado=='e' || resultado=='E'){
		return 1+verificarpontuacao(resultado);
	}
	return verificarpontuacao(resultado);	
}
//criando o programa principal(main).
void main(){
	char resultado[100];
	printf("Informe a sequencia de resultados: ");
	gets(resultado);
	fflush(stdin);
	int pontuacao=verificarpontuacao(resultado);
	printf("A pontucao do time foi: %d",pontuacao);
getch();	
}
