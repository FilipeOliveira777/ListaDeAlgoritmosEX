//172. Escreva um programa que leia um vetor de 10 números inteiros e, a seguir, leia um
//número inteiro N entre 1 e 10 e verifique quantas sequências de tamanho N formada
//por elementos consecutivos existem no vetor, de forma que todos os elementos da
//sequência estejam ordenados em ordem crescente. Por exemplo, no vetor (0, 6, 8,
//10, 4, 3, 5, 9, 2, 15), podemos encontrar três sequencias de três (N=3) elementos (0,
//6, 8), (6, 8, 10), (3, 5, 9) em ordem crescente.
#include<stdio.h>
const int tamanho=10;
void main(){
	int i,k,vet[tamanho],n,cont=0,veta[tamanho],contseq=0;
	//preenchendo o vetor.
	for(k=0; k<tamanho; k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vet[k]);
	}
	//pedindo o numero N.
	printf("informe um numero inteiro N entre 1 e 10: ");
	scanf("%d",&n);
	//percorrendo o vetor e pegando a sequencia N.
	for(k=0; k<tamanho; k++){
		for(i=k+1; i<n; i++){
			if(vet[k]<veta[i]){
			cont++;
			}
		}
		if(cont==3){
			contseq++;
		}
		cont=0;
	}
	//imprimindo o vetor.
		printf("%d ",contseq);
	
}
