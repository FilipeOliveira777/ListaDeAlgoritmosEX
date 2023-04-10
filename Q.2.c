#include<stdio.h>
void main (){
	float num1,num2,num3,media;
	int peso1,peso2,peso3;
	
	  printf("informe o primeiro numero");
	     scanf("%f",&num1);
	     
	    printf("informe o peso do primeiro numero");
		    scanf("%d",&peso1);
			
		printf("informe o segundo numero");
		     scanf("%f",&num2);
		
		printf("informe o peso do segundo numero");
		     scanf("%d",&peso2);
			 
		printf("informe o terceiro numero");
		     scanf("%f",&num3);
			 
		printf("informe o peso do terceiro numero");
		     scanf("%d",&peso3);
			 	 
		media = (num1*peso1+num2*peso2+num3*peso3)/peso1+peso2+peso3;
		
		printf("a media ponderada eh %.2f",media);
		
		getch();
}
