/*275. Escreva um subprograma recursivo que receba como entrada um n�mero inteiro N
n�o negativo e imprima a sa�da mostrada abaixo. O exemplo abaixo considera que N
� igual a 5.
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
