//235. Escreva um programa que leia as coordenadas x e y de um ponto e verifique se este
//ponto pertence à reta y = 2x +1. Esta verificação deve ser realizada através de um
//subprograma.
#include<stdio.h>
//verificando se as coordenadas x e y pertencem a reta Y=2x +1.
void verificarreta(int x, int y){
	int pertence;
	pertence=(2*x)+1;
	if(pertence==y){
		printf("O ponto pertence a reta");
	}
	else{
		printf("O ponto nao pertence a reta");
	}
}
//criando o programa principal(main).
void main(){
	int x,y;
	printf("Informe as coordenadas dos pontos x e y: ");
	scanf("%d%d",&x,&y);
	verificarreta(x,y);
getch();
}
