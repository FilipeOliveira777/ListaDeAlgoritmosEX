/*275. Escreva um subprograma recursivo que receba como entrada um número inteiro N
não negativo e imprima a saída mostrada abaixo. O exemplo abaixo considera que N
é igual a 5.
*
**
***
****
*****
*/
#include<stdio.h>
//imprimindo a saida pedida.
void imprimirasterisco(int n, int j,int k){
	if(n>0){
	if(j==k){
	printf("\n");
	}
	if(j<k){
		printf("*");
		imprimirasterisco(n,j+1,k);
	}		
	}
	imprimirasterisco(n-1,j=0,k+1);
}
//criando o programa principal(main).
void main(){
	int n,j;
	printf("Informe um numero: ");
	scanf("%d",&n);
	imprimirasterisco(n,0,1);
getch();
}
