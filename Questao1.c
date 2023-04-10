#include<stdio.h>
const pessoas=3
void main(){
	int abaixo=0,acima=0,ideal=0,k;
	float percabaixo,percacima,percideal,peso,altura;
	for(k=0;k<=pessoas;k++){
		printf("informe a altura");
		   scanf("%f",&altura);
		   
		printf("informe o peso");
		   scanf("%f",&peso);
		   
	float imc=peso/(altura*altura);
	
	if(imc<18){
		abaixo++;
		
	}
	
	else if(imc>25){
		acima++;
		
	}
		      
	else(imc>=18 && <=25){
		ideal++;
		
	}
	
	}
	percabaixo=(100/pessoas)*abaixo;
	percacima=(100/pessoas)*acima;
	percideal=(100/pessoas)*ideal;
	
	printf("o percentual de pessoas abaixo eh %.2f , acima eh %.2f , ideal eh %.2f ",percabaixo,percacima,percideal);
	
	getch();
		

	}	
	
	
	
	
	
	
	
	
	
}
