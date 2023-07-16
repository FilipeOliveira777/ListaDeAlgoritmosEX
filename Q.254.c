//254. Escreva um subprograma recursivo que receba como entrada dois números inteiros x
//e y e calcule o valor do produto de x por y.
#include<stdio.h>
//calculando o produto dos numeros.
int calcularproduto(int x, int y){
	if(y==0){
	return 0;
	}
	return x+calcularproduto(x,y-1);
}
//criando o programa principal(main).
void main(){
	int x,y,produto;
	printf("Informe os dois numeros inteiros: ");
	scanf("%d%d",&x,&y);
	produto=calcularproduto(x,y);
	printf("O produto dos numeros %d e %d eh: %d",x,y,produto);
getch();	
}
