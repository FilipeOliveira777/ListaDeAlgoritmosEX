//BINARIO
#include<stdio.h>
void main(){
	int k,binario,soma=0,n,p=1;
	printf("informe um numero: ");
	scanf("%d",&n);
	while(n!=0){
		binario=n%2;
		soma=soma+(binario*p);
		p=p*10;
		n=n/2;
	}
	printf("%d",soma);
	
	getch();
}
