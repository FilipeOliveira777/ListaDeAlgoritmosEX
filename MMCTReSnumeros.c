//calcularmmc
#include<stdio.h>
void main(){
	int mmc=1,divisor=2,num1,num2,num3;
	printf("informe tres numeros: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	while(num1>1 || num2>1 || num3>1){
		if(num1%divisor==0 || num2%divisor==0 || num3%divisor==0){
			if(num1%divisor==0){
				num1=num1/divisor;
			}
			if(num2%divisor==0){
				num2=num2/divisor;
			}
			if(num3%divisor==0){
				num3=num3/divisor;
			}
		mmc=mmc*divisor;
		
		}
		else{
			divisor++;
		}	
	}
	printf("o mmc eh %d",mmc);
	
	
	
}
