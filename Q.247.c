//247. Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique
//se o número lido é ou não um palíndromo. Esta verificação deve ser realizada através
//de um subprograma.
#include<stdio.h>
//verificando se o numero é palindromo.
int verificarpalindromo(int n){
	int milhar=n/1000;
	int centena=(n%1000)/100;
	int dezena=(n%100)/10;
	int unidade=(n%10)/1;
	int reverso=(unidade*1000)+(dezena*100)+(centena*10)+(milhar*1);
	return reverso;
}
//criando o programa principal(main).
void main(){
	int n,reverso;
	printf("Informe um numero inteiro entre 1000 e 9999: ");
	scanf("%d",&n);
	reverso=verificarpalindromo(n);
	if(reverso==n){
		printf("O numero eh palindromo");
	}
	else{
		printf("O numero nao eh palindromo");
	}
getch();	
}
