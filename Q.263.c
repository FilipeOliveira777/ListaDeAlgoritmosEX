/*263. Escreva um subprograma recursivo que receba como entrada dois números inteiros x
e y e calcule o resto da divisão de x por y. Para isso, não deve ser usada a função
mod.*/
#include<stdio.h>
//calculando o resto da divisao de x por y.
int calcularresto(int x, int y){
	if(x==0){
		return 0;
	}
	if(x<y){
		return x;
	}
	return calcularresto(x-y,y);
}
//criando o programa principal.
void main(){
	int x,y;
	printf("Informe dois numeros inteiros: ");
	scanf("%d%d",&x,&y);
	int restodivisao=calcularresto(x,y);
	printf("O resto da divisao de %d por %d eh: %d",x,y,restodivisao);
getch();	
}
