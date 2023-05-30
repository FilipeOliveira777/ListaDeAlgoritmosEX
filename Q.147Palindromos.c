//147. Escreva um programa que imprima todos os palíndromos existentes no intervalo
//[1000, 9999]. Um número é palíndromo quando o seu valor lido da esquerda para a
//direita é idêntico ao valor lido da direita para a esquerda. Exemplos: 1001, 2002,
//1221, 8888.
#include<stdio.h>
void main(){
	int k,n=1000,m=9999;
	for(k=n; k<=m; k++){
		int milhar=k/1000;
		int centena=(k%1000)/100;
		int dezena=(k%100)/10;
		int unidade=(k%10)/1;
		int reverso=(unidade*1000)+(dezena*100)+(centena*10)+(milhar*1);
		if(reverso==k){
			printf("%d\n",k);
		}
	}
	getch();
}
