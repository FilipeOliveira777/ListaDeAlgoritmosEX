#include <stdio.h>
void main(){
	int num;
	printf("informe um numero inteiro:");
	scanf("%d",&num);
	int k;
	int primo=2;
	int numD=0;
	int cont=0;
	while(num!=1){
		
		for(k=1;k<=primo;k++){
			if(primo%k==0){
				cont++;
				if(cont==2){
					numD++;
				}
			}
	}
	if(numD==2){
			printf("%d X",primo);
			num=num/primo;
		}
	else{
			primo++;
		}	
		}
}
