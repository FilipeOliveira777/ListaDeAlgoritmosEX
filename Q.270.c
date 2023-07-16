/*270. Escreva um subprograma recursivo que receba como entrada dois vetores de 10
números inteiros cada e um número inteiro N e verifique se os dois vetores são
idênticos a partir da posição N.*/
#include<stdio.h>
const int tamanho=10;
//verificando se o vetor é identico a partir da pos N.
int verificarvetor(int vet1[tamanho],int vet2[tamanho],int n){
	int cont=n;
	if(n==9){
		return 0;
	}
	if(vet1[n]!=vet2[n]){
		return 1;
	}
	return verificarvetor (vet1,vet2,n+1);	
}
//criando o programa principal(main).
void main(){
	int vet1[tamanho],vet2[tamanho],k,n;
	for(k=0; k<tamanho; k++){
		printf("Informe um numero para preencher o vetor 1 pos %d: ",k+1);
		scanf("%d",&vet1[k]);
	}
	for(k=0; k<tamanho; k++){
		printf("Informe um numero para preencher o vetor 2 pos %d: ",k+1);
		scanf("%d",&vet2[k]);
	}
	printf("Informe a partir de qual pos do vetor deve ser verificada: ");
	scanf("%d",&n);
	int vetorigual=verificarvetor(vet1,vet2,n-1);
	if(vetorigual!=1){
		printf("O vetor eh identico a partir da pos %d",n);
	}
	else if(vetorigual==1){
		printf("O vetor nao eh identico a partir da pos %d",n);
	}
getch();	
}
