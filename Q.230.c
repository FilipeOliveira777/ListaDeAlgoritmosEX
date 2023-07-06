//230. Escreva um programa que leia três números inteiros distintos e identifique o maior
//número lido. Esta verificação deve ser realizada através de um subprograma.
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
//criando o programa principal(main).
void main(){
	int n1,n2,n3,maior;
	printf("Informe tres numeros inteiros: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	maior=verificarmaior(n1,n2,n3);
	printf("O maior numero lido foi: %d",maior);
getch();	
}
