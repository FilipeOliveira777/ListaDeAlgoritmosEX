/*267. Escreva um subprograma recursivo que receba como entrada um vetor de 10
números inteiros, um número inteiro N entre 1 e 10 e um número inteiro X e
verifique quantas vezes o número X aparece no vetor a partir da posição N.*/
#include<stdio.h>
const int tamanho=10;
//calculando quantas vezes o numero x aparece no vetor a partir da posicao N.
int contarnumero(int vet[tamanho], int n, int x){
	if(n==9 && vet[n]==x){
		return 1;
	}
	if(n==9){
		return 0;
	}
	if(vet[n]==x){
	return 1+contarnumero(vet,n+1,x);
}
return contarnumero(vet,n+1,x);
}
//criando o programa principal(main).
void main(){
	int vet[tamanho],n,x,k;
	for(k=0; k<tamanho; k++){
	printf("Informe um numero inteiro para preencher a pos %d: ",k+1);
	scanf("%d",&vet[k]);
	}
	printf("Informe um numero inteiro N para a pos entre 1 e 10: ");
	scanf("%d",&n);
	printf("Informe o numero a ser procurado no vetor: ");
	scanf("%d",&x);
	int contvezes=contarnumero(vet,n-1,x);
	printf("O numero %d aparece %d de vezes a partir da pos %d",x,contvezes,n);
getch();	
}
