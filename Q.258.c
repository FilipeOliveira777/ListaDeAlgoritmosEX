//258. Escreva um subprograma recursivo que receba como entrada um valor em decimal e
//imprima o seu valor correspondente em binário.
#include<stdio.h>
//calculando o valor decimal em binario.
void calcularbinario(int n){
	if(n==0){
		return;
	}
 calcularbinario(n/2);
 printf("%d",n%2);	
}
//criando o programa principal(main).
void main(){
	int n;
	printf("Infome um valor em decimal: ");
	scanf("%d",&n);
	calcularbinario(n);
getch();	
}
