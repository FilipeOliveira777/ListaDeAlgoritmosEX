//Q.103. Escreva um programa que leia um n�mero inteiro N e verifique se ele � um n�mero primo.
#include<stdio.h>
void main(){
	int k,n,primo,divisores=0;
      printf("informe um numero inteiro");
          scanf("%d",&n);  
       for(k=1; k<=n; k++){
       	      primo=n/k;
	       if(n%k==0){
       	    divisores++;
		}
		}
		 if (divisores==2){
       		printf("o numero %d eh primo",n);
		 }
		   
       	else{
       		printf("o numero %d nao eh primo",n);
		   }
       	
       	getch();
	
	
	
}
