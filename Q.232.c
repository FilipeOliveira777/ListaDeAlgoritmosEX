//232. Escreva um programa que leia tr�s n�meros distintos e identifique o n�mero que n�o
//� nem o menor e nem o maior n�mero. Esta verifica��o deve ser realizada atrav�s de
//um subprograma.
#include<stdio.h>
//verificando o numero que nao � o menor nem o maior.
int verificarnmeio(int n1, int n2, int n3){
	int nmeio;
	if(n1>n2 && n1<n3 || n1>n3 && n1<n2){
		nmeio=n1;
	}
	if(n2>n1 && n2<n3 || n2>n3 && n2<n1){
		nmeio=n2;
	}
	if(n3>n1 && n3<n2 || n3<n1 && n3>n2){
		nmeio=n3;
	}
	return nmeio;
}
//criando o programa principal(main).
void main(){
	int n1,n2,n3,nmeio;
	printf("Informe tres numeros distintos: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	nmeio=verificarnmeio(n1, n2, n3);
	printf("O numero do meio que nao eh menor nem maior eh: %d",nmeio);
getch();	
}
