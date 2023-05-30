//calcular MMC de tres Numeros.
#include<stdio.h>
void main(){
	int k,num1,num2,num3;
	int divisores=2,mmc=1;
	printf("informe os tres numeros: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	while(num1>1 || num2>1 || num3>1){
		if(num1%divisores==0 || num2%divisores==0 || num3%divisores==0){
			if(num1%divisores==0){
				num1=num1/divisores;
			}
			if(num2%divisores==0){
				num2=num2/divisores;
			}
			if(num3%divisores==0){
				num3=num3/divisores;
			}
			mmc=mmc*divisores;
			}
			else{
				divisores++;
			}
	}
	printf("%d",mmc);
getch();
}
