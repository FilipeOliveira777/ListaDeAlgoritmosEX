//141. Escreva um programa que leia três números inteiros positivos e calcule o MMC dos
//números lidos.
#include <stdio.h>

void main(){
	int n1,n2,n3;
	printf("informe tres numero inteiros positivos");
	scanf("%d%d%d",&n1,&n2,&n3);
	int divisor=2;
	int mmc=1;
	while(n1>1 && n2>1 && n3>1){
		if(n1%divisor==0 || n2%divisor==0 || n3%divisor==0){
			if(n1%divisor==0){
				n1=n1/divisor;
			}
			if(n2%divisor==0){
				n2=n2/divisor;
			}
			if(n3%divisor==0){
				n3=n3/divisor;
			}
			mmc=mmc*divisor;
		}
		else{
			divisor++;
		}
	}
	printf("%d",mmc);
	getch();
}
