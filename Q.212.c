//212. Escreva um programa que leia o n�mero total de quest�es existentes em uma prova
//e o n�mero de quest�es que um candidato acertou e determine o seu percentual de
//acertos e o seu percentual de erros. O c�lculo deve ser realizado atrav�s de um
//subprograma.
#include<stdio.h>
//calculando o percentual de acertos.
float calcularpercenteacertos(int totalquestoes,int acertos){
	float percentualacertos;
	percentualacertos=(float)acertos/(float)totalquestoes*100;
	return percentualacertos;
}
//calculando o percentual de erros.
float calcularpercenterros(int totalquestoes,int acertos){
	float percentualerros;
	percentualerros=(totalquestoes-acertos)/(float)totalquestoes*100;
	return percentualerros;
}
//fazendo o programa principal(main).
void main(){
	int totalquestoes,acertos;
	float percentualacertos,percentualerros;
	printf("informe o total de questoes exitentes e o numero de questoes corretas: ");
	scanf("%d%d",&totalquestoes,&acertos);
	percentualacertos=calcularpercenteacertos(totalquestoes,acertos);
	percentualerros=calcularpercenterros(totalquestoes,acertos);
	printf("O percentual de acertos foi %.2f e de erros foi %.2f",percentualacertos,percentualerros);
}
