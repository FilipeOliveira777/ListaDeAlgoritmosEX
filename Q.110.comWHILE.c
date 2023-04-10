#include<stdio.h>
void main(){
int n,fatorial=1;
printf("informe um numero inteiro");
   scanf("%d",&n);
while(n!=1){
      	fatorial=fatorial*n;
		  n--;  	
   }
   printf("o fatorial do numero eh %d",fatorial); 
getch();
}


