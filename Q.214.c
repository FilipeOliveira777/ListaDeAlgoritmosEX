//214. Em um determinado concurso público, para cada questão que um candidato acerta
//ele ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada
//questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um
//programa que leia o número de questões que um candidato acertou, o número de
//questões que ele errou e o número de questões que ele deixou em branco e
//determine a sua pontuação final. A pontuação deve ser calculada através de um
//subprograma, que deve receber como entrada o número de questões certas, o
//número de questões erradas e o número de questões em branco. 
#include<stdio.h>
const int acerto=5;
const int erro=3;
const int brancos=0;
//calculando a pontução.
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
