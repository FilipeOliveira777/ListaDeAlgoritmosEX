//199. Escreva um programa que leia tr�s n�meros inteiros e calcule a sua m�dia aritm�tica.
//O c�lculo da m�dia deve ser realizado atrav�s de um subprograma.
#include<stdio.h>
int medianum(int n1, int n2, int n3){
	media=(n1+n2+n3)/3;
return media;
} 
void main(){
	int n1,n2,n3,mediaaritimetica;
	printf("informe tres numeros inteiros: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	mediaaritimetica=int medianum(n1,n2,n3);
	printf("A media dos numeros eh %d",mediaaritimetica);

	
}
