#include<stdio.h>
void main(){
	int a,b,aux;
	printf("informe o primeiro numero");
	       scanf("%d",&a);
	printf("informe o segundo numero");
	       scanf("%d",&b);
	       
	printf("antes da permutacao %d %d \n",a,b);       
		        aux=a;
		         a=b;
		         b=aux;
	printf("apos a permutacao %d %d",a,b);
	
	getch();		      
		          
	
	
	
	
	
}
