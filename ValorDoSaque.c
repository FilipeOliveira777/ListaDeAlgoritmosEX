//simule um caixa eletronico.
#include<stdio.h>
void main(){
	int saque,cedula100,cedula50,cedula20,cedula10,total=0;
	printf("informe o valor do saque: ");
	scanf("%d",&saque);
	while(saque>0){
		saque=total+saque;
		if(saque<10){
			printf("o restante do valor atual eh impossivel de ser sacado\n");
		}
		if(saque>=100){
		cedula100=saque/100;
		printf("notas  de 100: %d\n",cedula100);
			cedula100=0;
			saque=saque%100;
		}
		if(saque>=50){
			cedula50=saque/50;
			printf("notas de 50: %d\n",cedula50);
			cedula50=0;
			saque=saque%50;
		}
		if(saque>=20){
			cedula20=saque/20;
			printf("notas de 20: %d\n",cedula20);
			cedula20=0;
			saque=saque%20;
		}
		if(saque>=10){
			cedula10=saque/10;
			printf("notas de 10: %d\n",cedula10);
			cedula10=0;
			saque=saque%10;
		}
		printf("informe outro valor a ser sacado: ");
		scanf("%d",&saque);
	}
	printf("o total do saque foi: %d",total);
	}

