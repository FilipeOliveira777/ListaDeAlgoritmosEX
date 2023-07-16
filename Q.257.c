//257. Escreva um subprograma recursivo que receba como entrada dois n�meros inteiros
//correspondentes aos valores da base e do expoente e calcule o valor da potencia��o.
//Voc� pode supor que o expoente � um valor n�o negativo e que o caso 00 � tratado
//no programa principal (ou seja, n�o precisa ser tratado dentro do subprograma).
#include<stdio.h>
//calculando o valor da potencia��o.
int calcularpotenciacao(int base, int expoente){
	if(expoente==1 || base==1){
		return base;
	}
	return base*calcularpotenciacao(base,expoente-1);
}
//criando o programa principal(main).
void main(){
	int base,expoente;
	printf("Informe o valor da base e do expoente: ");
	scanf("%d%d",&base,&expoente);
	if(base==0 && expoente==0 || base==0){
		printf("Valor invalido");
	}
	else{
	int potenciacao=calcularpotenciacao(base,expoente);
	printf("A potenciacao da base %d e expoente %d eh: %d",base,expoente,potenciacao);
	}
getch();	
}
