//214. Em um determinado concurso p�blico, para cada quest�o que um candidato acerta
//ele ganha 5 pontos, para cada quest�o que ele erra ele perde 3 pontos e para cada
//quest�o que ele deixa em branco ele n�o ganha e nem perde pontos. Escreva um
//programa que leia o n�mero de quest�es que um candidato acertou, o n�mero de
//quest�es que ele errou e o n�mero de quest�es que ele deixou em branco e
//determine a sua pontua��o final. A pontua��o deve ser calculada atrav�s de um
//subprograma, que deve receber como entrada o n�mero de quest�es certas, o
//n�mero de quest�es erradas e o n�mero de quest�es em branco. 
#include<stdio.h>
const int acerto=5;
const int erro=3;
const int brancos=0;
//calculando a pontu��o.
int calcularpont(int numacertos,int numerros,int numbrancos){
	int pontuacaofinal;
	int pontuacaoacertos=numacertos*acerto;
	int pontuacaoerros=numerros*erro;
	int pontuacaobranco=numbrancos*brancos;
	pontuacaofinal=pontuacaoacertos-pontuacaoerros-pontuacaobranco;
	return pontuacaofinal;
}
//fazendo o programa principal(main).
void main(){
	int numacertos,numerros,numbrancos;
	int pontuacaofinal;
	printf("Informe o numero de acertos de erros e de questoes em branco: ");
	scanf("%d%d%d",&numacertos,&numerros,&numbrancos);
	pontuacaofinal=calcularpont(numacertos,numerros,numbrancos);
	printf("A pontuacao final foi: %d",pontuacaofinal);
getch();	
}
