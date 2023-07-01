//201. Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu
//triplo, o seu quadrado, o seu cubo e a sua raiz quadrada. Cada uma das informações
//solicitadas deve ser calculada através de um subprograma.
#include<stdio.h>
#include<math.h>
//calculando o dobro.
int calculardobro(int n){
	int dobro;
	dobro=n*2;
	return dobro;
}
//calculando o triplo.
int calculartriplo(int n){
	int triplo;
	triplo=n*3;
	return triplo;
}
//calculando o quadrado.
int calcularquadrado(int n){
	int quadrado;
	quadrado=n*n;
	return quadrado;
}
//calculando o cubo.
int calcularcubo(int n){
	int cubo;
	cubo=n*n*n;
	return cubo;
}
//calculando a raiz quadrada.
float calcularraiz(int n){
	float raiz;
	raiz=sqrt(n);
	return raiz;
}
//fazendo o main.
void main(){
	int n,dobron,triplon,quadradon,cubon;
	float raizn;
	printf("Informe um numero inteiro: ");
	scanf("%d",&n);
	dobron=calculardobro(n);
	triplon=calculartriplo(n);
	quadradon=calcularquadrado(n);
	cubon=calcularcubo(n);
	raizn=calcularraiz(n);
	printf("O dobro do numero %d eh %d\n",n,dobron);
	printf("O triplo do numero %d eh %d\n",n,triplon);
	printf("O quadrado do numero %d eh %d\n",n,quadradon);
	printf("O cubo do numero %d eh %d\n",n,cubon);
	printf("A raiz do numero %d eh %.1f\n",n,raizn);
getch();	
}
