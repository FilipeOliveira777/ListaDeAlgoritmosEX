//135. Escreva um programa que simule uma votação. O programa deve computar o voto de
//20 eleitores e depois deve imprimir a quantidade e o percentual de votos recebidos
//por cada candidato, bem como a quantidade e o percentual de votos nulos. As opções
//de voto são:
//[1] João Borracheiro
//[2] Zé do caminhão
//[3] Maria da bodega
//[4] Ana
#include<stdio.h>
const int quantidade=3;
void main(){
	int k,n,contjoao=0,contana=0,contze=0,contmaria=0,contnulo=0;
	for(k=1; k<=quantidade; k++){
		printf("informe o numero do seu candidato: ");
		scanf("%d",&n);
		if(n==1){
			contjoao++;
		}
		if(n==2){
			contze++;
		}
		if(n==3){
			contmaria++;
		}
		if(n==4){
			contana++;
		}
		else if(n==0){
			contnulo++;
		}
		
	}
	float percentualjoao=(contjoao*100)/quantidade;
	float percentualze=(contze*100)/quantidade;
	float percentualmaria=(contmaria*100)/quantidade;
	float percentualana=(contana*100)/quantidade;
	float percentualnulo=(contnulo*100)/quantidade;
	printf("O candidato joao recebeu %d votos e seu percentual eh %.2f\nO candidato ze %d votos e percentual %.2f\nA candidata maria %d votos e percentual %.2f\nA candidata ana %d votos e percentual %.2f\nO total de votos nulos foi %d e o percentual %.2f",contjoao,percentualjoao,contze,percentualze,contmaria,percentualmaria,contana,percentualana,contnulo,percentualnulo);
} 
