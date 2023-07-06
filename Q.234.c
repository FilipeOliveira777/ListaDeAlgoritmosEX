//234. Escreva um programa que leia as coordenadas x e y de dez pontos e verifique a qual
//quadrante cada ponto pertence. Você pode supor que cada ponto digitado pelo
//usuário pertence a apenas um quadrante.
#include<stdio.h>
const int quantidade=10;
//verificando a qual quadrante cada ponto pertence.
void verificarponto(int x, int y){
	if(x>0 && y>0){
		printf("O ponto pertence ao Primeiro quadrante\n");
		
	}
	else if(x<0 && y>0){
		printf("O ponto pertence ao Segundo quadrante\n");
	}
	else if(x<0 && y<0){
		printf("O ponto pertence ao Terceiro quadrante\n");
	}
	else if(x>0 && y<0){
		printf("O ponto pertence ao Quarto quadrante\n");
	}
	else if(x==0 && y==0){
		printf("O ponto nao esta em nenhum quadrante\n");
	}
}
//criando o programa principal(main).
void main(){
	int k,x,y;
	for(k=1; k<=quantidade; k++){
		printf("Informe as coordenadas x e y do ponto %d: ",k);
		scanf("%d%d",&x,&y);
		verificarponto(x,y);
	}
getch();	
}
