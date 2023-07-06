//233. Escreva um programa que leia os valores dos três ângulos internos de um triângulo e
//verifique se o mesmo é um triângulo retângulo. Esta verificação deve ser realizada
//através de um subprograma.
#include<stdio.h>
#include<math.h>
//verificando se o triangulo é um triangulo retangulo.
void verificartriangulo(float lado1, float lado2, float lado3){
	float maiorlado=0;
	if(lado1>maiorlado){
		maiorlado=lado1;
	}
	if(lado2>maiorlado){
		maiorlado=lado2;
	}
	if(lado3>maiorlado){
		maiorlado=lado3;
	}
	if(pow(lado1,2)+pow(lado2,2)==pow (maiorlado,2) || pow(lado2,2)+pow(lado3,2)==pow(maiorlado,2) || pow(lado3,2)+pow(lado2,2)==pow(maiorlado,2) || pow(lado3,2)+pow(lado1,2)==pow(maiorlado,2)){
	printf("O triangulo eh um triangulo retangulo");	
	}
	else if(pow(lado1,2)+pow(lado2,2)!=pow(maiorlado,2) || pow(lado2,2)+pow(lado3,2)!=pow(maiorlado,2) || pow(lado3,2)+pow(lado2,2)!=pow(maiorlado,2) || pow(lado3,2)+pow(lado1,2)!=pow(maiorlado,2)){
		printf("O triangulo nao eh um triangulo retangulo");
	}
}
//criando o programa principal(main).
void main(){
	float lado1,lado2,lado3;
	printf("Informe os tres lados do triangulo: ");
	scanf("%f%f%f",&lado1,&lado2,&lado3);
	verificartriangulo(lado1, lado2, lado3);
getch();		
}

