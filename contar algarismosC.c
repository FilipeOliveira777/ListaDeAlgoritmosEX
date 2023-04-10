#include<stdio.h>
void main(){
	int n,k,cont=0;
	printf("informe um numero inteiro");
	       scanf("%d",&n);
	do{
		int divisoes=n/10;
	}            
	
	while (n%10==0);
		cont++;
				
	printf("o numero de algarismos eh %d",cont);
	
	getch();
	
	
	
}
