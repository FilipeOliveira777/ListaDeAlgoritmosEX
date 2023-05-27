//123. Escreva um programa que leia dois números inteiros M e N e calcule os N primeiros 
//números primos maiores ou iguais a M.
#include<stdio.h>
void main(){
   int k,m,n,primo=0,contn=0;
   printf("informe dois numeros inteiros: ");
     scanf("%d %d",&m,&n);
    while(contn<n){
    for(k=1; k<=m; k++){
       if(m%k==0){
        primo++;
        }
     } 
    if(primo==2){
      printf(" %d ",m);
        contn++;
    }
    primo=0;
    m++;
    }
    getchar();


}
