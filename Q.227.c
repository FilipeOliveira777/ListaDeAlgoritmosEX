//227. Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (0-
//12 anos), adolescente (13-17 anos), adulta (18-59) ou idosa (acima de 60 anos). Esta
//verificação deve ser realizada através de um subprograma.
#include<stdio.h>
//verificando as idades.
void verificaridade(int idade){
	if(idade<=12 && idade>=0){
		printf("Voce eh crianca");
	}
	else if(idade>=13 && idade<=17){
		printf("Voce eh adolescente");
	}
	else if(idade>=18&&idade<=59){
		printf("Voce eh adulta");
	}
	else if(idade>59){
		printf("Voce eh idosa");
	}
}
//criando o programa principal(main).
void main(){
	int idade;
	printf("Informe a sua idade: ");
	scanf("%d",&idade);
	verificaridade(idade);
getch();
}
