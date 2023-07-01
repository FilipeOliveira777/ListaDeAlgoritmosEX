//217. Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor
//da unidade de milhar, da centena, da dezena e da unidade. O programa deve ter
//subprogramas para calcular cada informação solicitada.
#include<stdio.h>
//calculando a unidade de milhar.
int calcularmilhar(int n){
	int milhar;
	milhar=n/1000;
	return milhar;
}
//calculando a unidade da centena.
int calculacentena(int n){
	int centena;
	centena=n%100;
	return centena;
}
//calculando a unidade da dezena.
int calculardezena(int n){
	int dezena;
	dezena=n%10;
	return dezena;
}
//calculando a unidade.
int calcularunidade(int n){
	int unidade;
	unidade=n/1;
	return unidade;
}
//fazendo o programa principal(main).
