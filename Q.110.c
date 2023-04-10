#include<stdio.h>
void main(){
int k,n,fatorial;

printf("informe um numero inteiro");
   scanf("%d",&n);
     fatorial=n;
 for ( k=n-1; k>=2; k--){
       fatorial=fatorial*k;
       
 }
 printf("o fatorial do numero %d eh %d",n,fatorial);

getchar();



}
