//130. Escreva um programa que leia o n�mero de pessoas que ir�o participar de um evento,
//no qual ser� sorteado um pr�mio, e, a seguir, leia o nome e o n�mero do bilhete
//recebido por cada uma destas pessoas. O programa deve informar o nome do
//ganhador do pr�mio, que � a pessoa cuja ordem de chegada � igual ao n�mero do seu
//bilhete. Para isto, voc� poder supor que: a ordem de chegada de cada pessoa
//corresponde � ordem de leitura dos seus dados; sempre existe uma pessoa cujo
//n�mero do bilhete � igual a sua ordem de chegada; este caso acontece para apenas
//uma pessoa.
	
#include<stdio.h>
#include<string.h>
void main(){
	int k,npessoas,bilhete;
	char nome[100];
	printf("informe o numero de participantes: ");
	scanf("%d",&npessoas);
	for(k=1; k<=npessoas; k++){
		printf("informe o nome: ");
			scanf("%s",nome);
		printf("informe o numero do bilhete: ");
			scanf("%d",&bilhete);	
		if(k==bilhete){
			printf("O ganhador foi: %s",nome);
			break;
		}
	}
	getch();
			
}
