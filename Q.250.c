//250. Escreva um programa que leia cinco números inteiros e determine o segundo maior
//número digitado pelo usuário e a ordem em que o mesmo foi digitado. Esta
//verificação deve ser realizada através de um subprograma.
#include<stdio.h>
//verificando qual o segundo maior numero digitado pelo usuario.
int verificarsegmaior(int n1, int n2, int n3, int n4, int n5){
	int maiorvalor=0,segmaiorvalor=0;
	if(n1>n2 && n1>n3 && n1>n4 && n1>n5){
		maiorvalor=n1;
		if(n2<maiorvalor && n2>n3 && n2>n4 && n2>n5){
			segmaiorvalor=n2;
			return segmaiorvalor;
		}
	}
	if(n2>n1 && n2>n3 && n2>n4 && n2>n5){
		maiorvalor=n2;
		if(n3<maiorvalor && n3>n4 && n3>n5){
			segmaiorvalor=n3;
			return segmaiorvalor;
		}
	}
	if(n3>n1 && n3>n2 && n3>n4 && n3>n5){
		maiorvalor=n3;
		if(n4<maiorvalor && n4>n5 && n4>n1 && n4>n2){
			segmaiorvalor=n4;
			return segmaiorvalor;
		}
	}
	if(n4>n1 && n4>n3 && n4>n2 && n4>n5){
		maiorvalor=n4;
		if(n5<maiorvalor && n5>n3 && n5>n1 && n5>n2){
			segmaiorvalor=n5;
			return segmaiorvalor;;
		}
	}
	if(n5>n1 && n5>n2 && n5>n3 && n5>n4){
		maiorvalor=n5;
		if(n1<maiorvalor && n1>n3 && n1>n4 && n1>n5){
		segmaiorvalor=n1;
		return segmaiorvalor;
		}
	}
}
//criando o programa principal(main).
void main(){
	int n1,n2,n3,n4,n5,segmaiorvalor;
	printf("Informe cinco numeros inteiros: ");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	segmaiorvalor=verificarsegmaior(n1, n2, n3, n4, n5);
	printf("O segundo maior valor informado foi: %d",segmaiorvalor);
getch();	
}
