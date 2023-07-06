//222. O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele
//financia qualquer valor em 5 prestações. O valor da primeira prestação corresponde
//à 20% do valor do empréstimo. Os valores das demais prestações correspondem ao
//valor da parcela anterior acrescido de uma taxa de juros de 7%. Escreva um
//programa que leia o valor a ser financiado por um cliente e calcule: o valor de cada
//prestação, o valor total que o cliente vai pagar pelo empréstimo e o total de juros
//que o cliente vai pagar pelo empréstimo. O programa deve ter um subprograma para
//calcular o valor de cada parcela do empréstimo.
#include<stdio.h>
const float primeirataxa=0.20;
const float taxapos=0.07;
//calculando o valor da primeira parcela.
float calcularprimparcela(float valfinanciado){
	float primparcela;
	primparcela=valfinanciado*primeirataxa;
	return primparcela;
}
//calculando o valor da segunda parcela.
float calcularsegparcela(float valfinanciado,float primparcela){
	float segparcela;
	segparcela=primparcela+(primparcela*taxapos);
	return segparcela;
}
//calculando o valor da terceira parcela.
float calculartercparcela(float valfinanciado,float segparcela){
	float tercparcela;
	tercparcela=segparcela+(segparcela*taxapos);
	return tercparcela;
}
//calculando o valor da quarta parcela.
float calcularquartparcela(float valfinanciado,float tercparcela){
	float quartparcela;
	quartparcela=tercparcela+(tercparcela*taxapos);
	return quartparcela;
}
//calculando o valor da quinta parcela.
float calcularquintparcela(float valfinanciado,float quartparcela){
	float quintparcela;
	quintparcela=quartparcela+(quartparcela*taxapos);
	return quintparcela;
}
//fazendo o programa principal(main).
void main(){
	float valfinanciado,primparcela,segparcela;
	float tercparcela,quartparcela,quintparcela;
	printf("Informe o valor a ser financiado: ");
	scanf("%f",&valfinanciado);
	primparcela=calcularprimparcela(valfinanciado);
	segparcela=calcularsegparcela(valfinanciado,primparcela);
	tercparcela=calculartercparcela(valfinanciado,segparcela);
	quartparcela=calcularquartparcela(valfinanciado,tercparcela);
	quintparcela=calcularquintparcela(valfinanciado,quartparcela);
	printf("O valor da primeira parcela eh %.2f\n",primparcela);
	printf("O valor da segunda parcela eh %.2f\n",segparcela);
	printf("O valor da terceira parcela eh %.2f\n",tercparcela);
	printf("O valor da quarta parcela eh %.2f\n",quartparcela);
	printf("O valor da quinta parcela eh %.2f\n",quintparcela);
getch();
}

