//243. Escreva um programa que leia um caractere e verifique se o mesmo é uma letra
//maiúscula, uma letra minúscula, um numeral ou nenhum dos tipos anteriores. Esta
//verificação deve ser realizada através de um subprograma.
#include<stdio.h>
//verificando o caractere.
void verificarcaractere(char caractere){
	if(caractere>='A' && caractere<='Z'){
		printf("O caractere %c eh uma letra maiuscula",caractere);
	}
	else if(caractere>='a' && caractere<='z'){
		printf("O caractere %c eh uma letra minuscula",caractere);
	}
	else if(caractere>='0' && caractere<='9'){
		printf("O caractere %c eh um numeral",caractere);
	}
	else{
		printf("O caractere nao eh nenhum dos tipos");
	}
}
//criando o programa principal(main).
void main(){
	char caractere;
	printf("Informe um caractere: ");
	scanf("%c",&caractere);
	fflush(stdin);
	verificarcaractere(caractere);
getch();
}
