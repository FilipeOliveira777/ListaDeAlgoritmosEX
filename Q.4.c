#include<stdio.h>
#include<math.h>
void main(){
int n,dobro,triplo,quadrado,cubo;
float raiz;
    
    printf("informe um numero inteiro");
       scanf("%d",&n);
    
	dobro = n*2;
	triplo = n*3;
	quadrado = n*n;
	raiz = sqrt(n);
	cubo = n*n*n;
	
	printf("o dobro eh %d o triplo eh %d o quadrado eh %d a raiz eh %.2f e o cubo eh %d",dobro,triplo,quadrado,raiz,cubo);
	
	getch();
	
	}
	   

