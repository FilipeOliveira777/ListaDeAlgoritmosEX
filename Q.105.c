//105. Escreva um programa que leia dois n�meros inteiros M e N e calcule a soma de todos os n�meros do intervalo [M, N].
#include<stdio.h>
void main(){
	int m,n,k,soma=0;
	    printf("informe o primeiro numero");
	             scanf("%d",&m);
	    printf("informe o segundo numero");
		       scanf("%d",&n); 
			   
	if(m>n){
		int aux=m;
		m=n;
		n=aux;	
	}		          
    for(k=m;k<=n; k++){
    	soma=soma+k; 	
	}
	printf("a soma dos intervalos eh %d",soma);
	
	getch();
	
		
}
