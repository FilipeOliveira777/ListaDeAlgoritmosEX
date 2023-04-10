#include <stdio.h>
#include <math.h>
const int tam=4;
void main(){
	float peso,altura;
	float imc= peso /pow(altura,2);
	int k;
	int contAcima=0;
	int contMedia=0;
	int contAbaixo=0;
	for(k=1;k<=tam;k++){
		printf("informe o peso e a altura de uma pessoa:");
		scanf("%f%f",&peso,&altura);
		if(imc>=18 && imc <=25){
			contMedia++;
		}
		else if(imc<18){
			contAbaixo++;
		}
		else if(imc>25){
			contAcima++;
		}
	}
	
	float percentualMedia= 100/tam * contMedia;
	float percentualAbaixo= 100/tam *  contAbaixo;
	float percentualAcima=100/tam * contAcima;
	
	printf("o percentual de pessoas na media da faixa de peso adequada eh %.2f, o percentual de pessoas  abaixo do peso da faixa de peso adequada eh %.2f e a faixa de pessoas acima do peso entre a faixa de peso adequada eh %.2f", percentualMedia,percentualAbaixo,percentualAcima);
	getch();
}
