//ler uma palavra e mostrar o tanto de letras.
#include<stdio.h>
#include<string.h>
void main(){
	char palavra[100];
	int letras,cont=0;
	
	do{
		printf("informe uma palavra: ");
	gets(palavra);
	 fflush(stdin);
		letras=strlen(palavra);
		  
		  if(letras==5){
		  	cont++;
		  }	
		  printf("a palavra %s tem %d de letras",palavra,letras);
	}
	while(cont!=2);
	
getch();

	}	
