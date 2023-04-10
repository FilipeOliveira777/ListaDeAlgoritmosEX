#include<stdio.h>
void main(){
	int lado;
	float area,perimetro;
	    
	    printf("informe o valor do quadrado");
	       scanf("%d",&lado);
	       
	    area = lado*lado;
		
		perimetro = 4*lado;
		
		printf("a area do quadrado eh %.2f e o perimemtro eh %.2f",area,perimetro);
		
		getch();   
	
	
	
}
