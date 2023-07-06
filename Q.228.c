//228. Escreva um programa que leia as coordenadas x e y de um ponto e verifique a
//quantidade de quadrantes a que este ponto pertence. Esta verificação deve ser
//realizada através de um subprograma.
#include<stdio.h>
//verificando a quantos quadrantes o ponto pertence.
int verificarquadrante(float x,float y){
	int cont=0;
	if(x>0 && y>0){
		cont++;
	}
	if(x<0 && y>0){
		cont++;
	}
	if(x<0 && y<0){
		cont++;
	}
	if(x>0 && y<0){
		cont++;
	}
	if(x==0 && y==0){
		cont=cont+4;
	}
	else if(x==0 || y==0){
		cont=cont+2;
	}
	return cont;
}
//criando o programa principal(main).
void main(){
	float x,y;
	int quadrantes;
	printf("Informe as coordenadas X e Y: ");
	scanf("%f%f",&x,&y);
	quadrantes=verificarquadrante(x,y);
	printf("O ponto pertence A %d Quadrantes",quadrantes);
getch();	
}
