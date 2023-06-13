//escreva um programa em c que leia um numero inteiro nao negativo e calcule a quantidade de bits para
//representar esse numero na base binaria.por exemplo, o valor 8 em binario é 1000, entao sao necessarios pelo menos 4 bits
//para representa-lo. valor do numero 47 é 101111, entao sao necessario ao menos 6bits para representalo.
#include<stdio.h>
void main(){
	int k,n,binario,cont=0;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	while(n!=0){
		binario=n%2;
		cont++;
		n=n/2;
		
	}
	printf("%d",cont);
	
	getch();
	
	
}
