#include<stdio.h>
#include<string.h>
const int totalbois=2;
void main (){
  	float peso,maispesado=0,maisleve=1000;
  	char boi[20],leve[20],pesado[20];
  	int k;
  	for(k=1; k<=totalbois; k++){
  		printf("informe o nome do boi");
  		  scanf("%s",boi);
  		      fflush(stdin);
  		      
		printf("informe o peso do boi");
		  scanf("%f",&peso);	  
	     if (peso>maispesado){
			  maispesado = peso;
			  strcpy(pesado,boi);	
	      }  
	     	if (peso<maisleve){
	            maisleve = peso;
	            strcpy(leve,boi);
		    }		  		       
	  }
		printf("o boi mais pesado eh %s \n",pesado);
        printf("o boi mais leve eh %s \n",leve);	
	
	getch();
	  	  
}
