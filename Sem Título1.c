#include<stdio.h>

int tam = 5;
int tam2 = 10,i,k,l,j;
void lerVetor(int vet[], int tam){
	for(i = 0; i<tam; i++){
		printf("Informe o numero: ");
		scanf("%d",&vet[i]);
	}
}

void main(){
	int vetA[tam], vetB[tam], vetC[tam2];
	lerVetor(vetA,tam);
	lerVetor(vetB, tam);
	
	for(i = 0; i<tam; i++ ){
		vetC[i] = vetA[i];
		vetC[i+5] = vetB[i];
	}
	for( i = 0; i<tam2; i++){
		for( k = i+1; k<tam2; k++){
			if(vetC[i]==vetC[k]){
			  vetC[i] = vetC[k];
			  tam2--;
			  	
			}
		
		
			
			
		}
	}
	for(l = 0; l<tam2; l++){
		printf("%d ",vetC[l]);
	}
}
