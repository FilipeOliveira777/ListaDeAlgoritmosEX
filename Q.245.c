//245. Escreva um programa que leia um n�mero inteiro entre 1 e 12 correspondente a um
//m�s do ano e verifique o trimestre a que este m�s pertence. Esta verifica��o deve ser
//realizada atrav�s de um subprograma.
#include<stdio.h>
//verificando a qual trimestre o mes N pertence.
void verificarmes(int nmes){
	if(nmes>=1 && nmes<=3){
		printf("O mes %d pertence ao primeiro trimestre",nmes);
	}
	else if(nmes>=4 && nmes<=6){
		printf("O mes %d pertence ao segundo trimestre",nmes);
	}
	else if(nmes>=7 && nmes<=9){
		printf("O mes %d pertence ao terceiro trimestre",nmes);
	}
	else if(nmes>=10 && nmes<=12){
		printf("O mes %d pertence ao quarto trimestre",nmes);
	}	
}
//criando o programa principal(main).
void main(){
	int nmes;
	printf("Informe o numero do mes entre 1 e 12: ");
	scanf("%d",&nmes);
	verificarmes(nmes);
getch();
}
