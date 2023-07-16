/*268. Escreva um subprograma recursivo que receba como entrada um vetor de 10
números inteiros e um número inteiro N entre 1 e 10 e verifique quantos números
pares existem a partir da posição N do vetor.*/
#include<stdio.h>
const int tamanho=10;
//verificando quantos numeros pares existe a partir da posição N.
int calcularpares(int vet[tamanho],int n){
	if(n==9 && vet[n]%2!=0){
		return 0;
	}
	if(n==9 && vet[n]%2==0){
		return 1;
	}
	if(vet[n]%2==0){
		return 1+calcularpares(vet,n+1);
	}
	return calcularpares(vet,n+1);
}
//criando o programa principal(main).
void main(){
	int vet[tamanho],k,n;
	for(k=0; k<tamanho; k++){
		printf("Informe um numero inteiro para preencher a pos %d: ",k+1);
		scanf("%d",&vet[k]);
	}
	printf("Informe a partir de qual posicao os pares deve ser procurados: ");
	scanf("%d",&n);
	int contarpares=calcularpares(vet,n-1);
	printf("A partir da pos %d Existe %d de pares",n,contarpares);
getch();
}
