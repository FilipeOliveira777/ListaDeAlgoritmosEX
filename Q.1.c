#include<stdio.h>
void main(){
	int num1,num2,num3;
	float media;
	    printf("informe o primeiro numero");
	       scanf("%d",&num1);
	    
		printf("informe o segundo numero");
		    scanf("%d",&num2);   
        
		printf("informe o terceiro numero");
		    scanf("%d",&num3);   
	    
		media = (num1+num2+num3)/3;
		
		printf("a media aritimetica eh %2.f",media);
		
		getch();
}   
