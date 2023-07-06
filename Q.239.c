//239. Escreva um programa que leia as tr�s notas de um aluno e verifique se o mesmo est�
//aprovado por m�dia, se far� prova final ou se est� reprovado por m�dia. Caso o
//aluno tenha que fazer a prova final, o programa deve informar quanto ele ter� que
//tirar na prova. Voc� pode considerar que a m�dia m�nima para a aprova��o por
//m�dia � 7 e que a m�dia m�nima para fazer a prova final � 4. O c�lculo da prova final
//� calculado atrav�s da f�rmula abaixo. O programa deve ter um subprograma para
//calcular a m�dia parcial, um subprograma para determinar a situa��o do aluno e um
//subprograma para calcular quanto um aluno ter� que tirar na prova final.
#include<stdio.h>
const float mediaaprovado=7;
const float mediaminima=4;
//verificando a media parcial do aluno.
float calcularmediaparcial(float nota1, float nota2, float nota3){
	float mediaparcial=0;
	mediaparcial=(nota1+nota2+nota3)/3;
	return mediaparcial;
}
//verificando se o aluno esta aprovado, reprovado ou se vai fazer a prova final.
void verificarsituacao(float mediaparcial){
	if(mediaparcial>=mediaaprovado){
		printf("O aluno esta aprovado");
	}
	else if(mediaparcial>=mediaminima && mediaparcial<mediaaprovado){
		printf("O aluno precisara fazer a prova final");
	}
	else{
		printf("O aluno esta reprovado por media");
	}
}
//calculando quanto o aluno deve tirar na prova final.
float calcularnotanecessaria(float mediaparcial){
	float notanecessaria=0;
	notanecessaria=(25-(3*mediaparcial))/2;
	return notanecessaria;
}
//criando o programa principal(main).
void main(){
	float nota1,nota2,nota3;
	float mediaparcial,notanecessaria;
	printf("Informe as tres notas do aluno: ");
	scanf("%f%f%f",&nota1,&nota2,&nota3);
	mediaparcial=calcularmediaparcial(nota1, nota2, nota3);
	verificarsituacao(mediaparcial);
	if(mediaparcial>=mediaminima && mediaparcial<mediaaprovado){
	notanecessaria=calcularnotanecessaria(mediaparcial);
	printf("\nPara ser aprovado o aluno precisa de %.2f",notanecessaria);
	}
getch();	
}
	

