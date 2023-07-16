/*269. Escreva um subprograma recursivo que receba como entrada um vetor de 10
números inteiros e um número inteiro N entre 1 e 10 e verifique se existe algum
número primo a partir da posição N do vetor.*/
#include<stdio.h>
const int tamanho=10;
//verificando se existe algum numero primo a partir da posição N.
int verificarprimo(int vet[tamanho],int n){
	if(n==9 && vet[n]%vet[n]==0){
		return 1;
	}
	if(n==9 && vet[n]%vet[n]!=0){
		return 0;
	}
	if(vet[n]%vet[n]==0){
		return 1;
	}
	if(vet[n]%1==0){
		return 0;
	}
	return verificarprimo(vet,n/n)+verificarprimo(vet,n+1);
}
//criando o programa principal(main).
void main(){
	int vet[tamanho],n,k;
	for(k=0; k<tamanho; k++){
		printf("Informe um numero inteiro para a pos %d: ",k+1);
		scanf("%d",&vet[k]);
	}
	printf("Informe a partir de qual pos deve ser verificada: ");
	scanf("%d",&n);
	int contarprimos=verificarprimo(vet,n-1);
	if (contarprimos==1){
	printf("Existe primo no vetor a partir da pos %d",n);
	}
	if(contarprimos==0){
		printf("Nao existe primo no vetor a partir da pos %d",n);
	}
getch();	
}
