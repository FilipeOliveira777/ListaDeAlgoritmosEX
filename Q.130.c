//130. Escreva um programa que leia o número de pessoas que irão participar de um evento,
//no qual será sorteado um prêmio, e, a seguir, leia o nome e o número do bilhete
//recebido por cada uma destas pessoas. O programa deve informar o nome do
//ganhador do prêmio, que é a pessoa cuja ordem de chegada é igual ao número do seu
//bilhete. Para isto, você poder supor que: a ordem de chegada de cada pessoa
//corresponde à ordem de leitura dos seus dados; sempre existe uma pessoa cujo
//número do bilhete é igual a sua ordem de chegada; este caso acontece para apenas
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
