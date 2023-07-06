//231. Escreva um programa que leia três números inteiros distintos e identifique o maior e
//o menor número lido. O programa deve ter um subprograma para calcular o maior
//número e outro para calcular o menor número.
#include<stdio.h>
//identificando o maior numero lido.
int verificarmaior(int n1, int n2, int n3){
	int maior=0;
	if(n1>maior){
		maior=n1;
	}
	if(n2>maior){
		maior=n2;
	}
	if(n3>maior){
		maior=n3;
	}
	return maior;
}
//identificando o menor numero lido.
int verificarmenor(int n1, int n2, int n3){
	int menor=n1;
	if(n2<menor){
		menor=n2;
	}
	if(n3<menor){
		menor=n3;
	}
	return menor;
}
//criando o programa principal(main).
void main(){
	int n1,n2,n3,maior,menor;
	printf("Informe tres numeros inteiros: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	maior=verificarmaior(n1, n2, n3);
	menor=verificarmenor(n1, n2, n3);
	printf("O maior numero lido foi: %d\nO menor numero lido foi: %d",maior,menor);
getch();	
}
