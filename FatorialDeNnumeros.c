//fatorial de N numeros
#include<stdio.h>
const int quantidade=5;
void main(){
	int k,n,i;
	for(k=1; k<=quantidade; k++){
	printf("informe um numero: ");
	scanf("%d",&n);
	int fatorial=1;
	for(i=n; i>=1; i--){
		fatorial=fatorial*i;
	}
	printf("o fatoral do numero %d eh %d\n",n,fatorial);
	
	}
getch();
	
	
	
}
