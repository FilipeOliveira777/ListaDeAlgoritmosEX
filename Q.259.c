//259. Escreva um subprograma recursivo que receba como entrada um valor em decimal e
//imprima o seu valor correspondente em hexadecimal.
#include<stdio.h>
//calculando o valor decimal em hexadecimal.
void calcularhexadecimal(int n){
	if(n==0){
		return;
	}
	calcularhexadecimal(n/16);
	 int resto=n%16;
    if (resto<10){
        printf("%d", resto);
    } else {
        char hexChar = 'A' + (resto - 10);
        printf("%c", hexChar);
    }
}
//criando o programa principal(main).
void main(){
	int n;
	printf("Informe um numero decimal: ");
	scanf("%d",&n);
	calcularhexadecimal(n);
getch();
}

