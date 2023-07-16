/*278. Escreva um programa que leia vários números inteiros até ler o número 0, que não
deverá ser processado. Após finalizar a leitura, o programa deve imprimir todos os
números lidos na ordem inversa a que eles foram digitados pelo usuário. */
#include<stdio.h>
//criando um registro com dois campos, numero e proximo.
typedef struct nodo{
	int numero;
	struct nodo*proximo;
}Nodo;
//criando a pilha.
typedef struct{
	Nodo*topo;
}Pilha;
//criando uma nova pilha.
 Pilha*criarpilha(){
 	Pilha*pilha=(Pilha*)malloc(sizeof(Pilha));
 	pilha->topo=NULL;
 	return pilha;
 }
//inserindo um numero na pilha.
void push(Pilha*pilha, int n){
	Nodo*novo=(Nodo*)malloc(sizeof(Nodo));
	novo->numero=n;
	novo->proximo=pilha->topo;
	pilha->topo=novo;
}



void imprimirinversao(int n, pilha*aux){
	
		
}
//criando o programa principal(main).
void main(){
	int n,inversao;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	while(n!=0){
	printf("informe um numero inteiro: ");
	scanf("%d",&n);	
	imprimirinversao(n);
	}
	

}



