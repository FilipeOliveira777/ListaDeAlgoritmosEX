//106. Escreva um programa que leia dois n�meros inteiros M e N e calcule a m�dia aritm�tica dos n�meros do intervalo [M, N].
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
