//106. Escreva um programa que leia dois números inteiros M e N e calcule a média aritmética dos números do intervalo [M, N].
#include<stdio.h>
void main(){
	int m,n,k,cont=0;
	float media=0,mediaaritimetica;
	  
	  printf("informe o primeiro numero");
	     scanf("%d",&m);
	  printf("informe o segundo numero");
	     scanf("%d",&n);
		 	 
	for(k=m; k<=n; k++){
		cont++;
		media=media+k;		
		
	}
	
	mediaaritimetica=media/cont;
		    
	printf("a media da soma dos intervalos eh %.2f",mediaaritimetica);
	
	getch();
		
}
