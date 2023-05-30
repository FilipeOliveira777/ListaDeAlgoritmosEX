//Binario
#include<stdio.h>
void main(){
	int k,n,p=1,soma=0;
	printf("informe um numero: ");
	scanf("%d",&n);
	while(n!=0){
		int binario=n%2;
		soma=soma+(binario*p);
		p=p*10;
		n=n/2;
		
	}
	printf("%d",soma);
	getch();
	
	
	
}
