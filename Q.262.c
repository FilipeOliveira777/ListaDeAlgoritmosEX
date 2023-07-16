/*262. Escreva um subprograma recursivo que receba como entrada dois números inteiros x
e y e calcule o quociente (a parte inteira) da divisão de x por y. Para isso, não deve
ser usada a função div.*/
#include<stdio.h>
int calcularquociente(int x, int y){
	if(x==0){
		return 0;
	}
	else if(x<y){
		return 0;
	}	
	return 1+calcularquociente(x-y,y);
}
//criando o programa principal(main).
void main(){
	int x,y;
	printf("Informe dois numeros inteiros: ");
	scanf("%d%d",&x,&y);
	int quociente=calcularquociente(x,y);
	printf("O quociente da divisao de %d e %d eh: %d",x,y,quociente);
getch();	
}

