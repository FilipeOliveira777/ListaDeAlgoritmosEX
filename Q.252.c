//252. Escreva um subprograma recursivo que receba como parâmetros de entrada dois
//números inteiros M e N e calcule a soma de todos os números do intervalo [M, N].
#include<stdio.h>
//calculando a soma dos intervalos.
int calcularintervalo(int m, int n){
	if(m==n){
	 return m;
	}
	return m + calcularintervalo(m+1,n);	
}
//criando o programa principal(main).
void main(){
	int m,n,soma;
	printf("Informe o valor dos intervalos: ");
	scanf("%d%d",&m,&n);
	soma=calcularintervalo(m,n);
	printf("A soma dos intervalos de %d e %d eh: %d",m,n,soma);
getch();	
}
