//194. Escreva um programa que implemente um jogo de batalha naval. O programa usa um
//tabuleiro com cem células, composto por dez linhas e dez colunas. O programa deve
//“esconder” vinte alvos em posições aleatórias, que devem ser omitidas do usuário.
//Quando o usuário joga uma partida, ele tem direito a dar vinte tiros em posições
//aleatórias (e não repetidas) do tabuleiro. Sempre que acertar um alvo, o usuário
//ganha um ponto. Sempre que uma partida é encerrada, o programa deve informar a
//pontuação do usuário e perguntar se ele deseja ou não iniciar uma nova partida.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int linhas=10;
const int colunas=10;
void main(){
	int mat[linhas][colunas],conttiros=0,i,j,alvos=1,contponto=0,matpalpites[linhas][colunas];
	int k,linhausuario,colunausuario,jogada=102;
	char continuar;
	srand(time(NULL));
	//preenchendo a matriz com numeros aleatorios.
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			mat[i][j]= rand()%100;
		}
	}
	//colocando os 20 alvos em posiçoes aleatorias.
	for(i=0; i<20; i++){
	mat[rand() % 10][rand() % 10]=alvos;
	}
	//pegando os tiros do usuario.
	do{
	for(k=0; k<20; k++){
		printf("informe uma linha e coluna entre 1 e 10: \n");
		scanf("%d%d",&linhausuario,&colunausuario);
		if(mat[linhausuario-1][colunausuario-1]==alvos){
			contponto++;
			printf("Parabens vc encontrou 1 alvo\n");
		}
	}
	//informando a pontuação e verificando se o usuario deseja continuar.
	printf("fim de jogo e a sua pontuacao foi %d pontos\n",contponto);
	printf("Deseja continuar o jogo S ou N?");
	scanf("%c",&continuar);
	}
	while(strcmp(continuar, "n"|| "N") != 0);

getch();
}
