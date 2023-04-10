#include<stdio.h>
void main(){
	
	int num;
	int primo=2;
	printf("informe um numero inteiro positivo");
	    scanf("%d",&num);
	    
	while(num!=1){
		if(num%primo==0 && num==primo){
		  printf("%d",primo);	
		}
		
		else if(num%primo==0){
			printf("%d x ",primo);
			num=num/primo;
		}
		 
		else {
			primo++;
		}
		
		getch();
		
		
		
	}    
	    
	
	
	
	
	
}
