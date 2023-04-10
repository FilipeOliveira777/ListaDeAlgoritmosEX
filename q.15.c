#include<stdio.h>
#include<string.h>
void main(){
	int k;
	char palavra[100];
	 
	 printf("digite uma palavra");
	     scanf("%s",palavra);
	     
     printf("informe um numero");	
	      scanf("%d",&k);
	      
	 printf("a kesima letra eh %c",palavra[k-1]);     
	
	getch();
	
}
