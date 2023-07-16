//255. Escreva um subprograma recursivo que receba como entrada o termo inicial e a
//razão de uma progressão aritmética e um número inteiro positivo N e calcule o
//enésimo termo da progressão.
#include<stdio.h>
//calculando o enesiomo termo da progressao.
int calcularprogressao(int termo1,int razao,int n){
	if(n==1){
		return termo1;
	}
	return razao+calcularprogressao(termo1,razao,n-1);
}
//criando o programa principal(main).
void main(){
	int termo1,razao,n;
	printf("Informe o primeiro termo e a razao: ");
	scanf("%d%d",&termo1,&razao);
	printf("Informe um numero inteiro: ");
	scanf("%d",&n);
	int progressao=calcularprogressao(termo1,razao,n);
	printf("O termo %d da progressao eh: %d",n,progressao);
getch();	
}
