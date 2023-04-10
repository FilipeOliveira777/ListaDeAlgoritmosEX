//108. Escreva um programa que leia 20 números entre 10000 e 99999 referente aos
//números dos deputados estaduais eleitos e identifique a quantidade de candidatos
//que cada partido elegeu. O número do partido do deputado pode ser identificado
//pelos dois primeiros algarismos do número do candidato. Por exemplo, um candidato
//com número 13457 concorre pelo PT, que é o partido de número 13, enquanto que um
//candidato com número 45879 concorre pelo PSDB, que é o partido de número 45.
//Neste programa, considere os seguintes números de partido: 13 (PT), 14 (PTB), 15
//(PMDB), 25 (DEM), 45 (PSDB) e 65( PCdoB).
#include<stdio.h>
const int numeros=5;
void main(){
   int k,numero,contpt=0,contptb=0,contpmdb=0,contdem=0,contpsdb=0,contpcdob=0,voto;
    for(k=1; k<=numeros; k++){
    	printf("informe o numero do candidato");
    	   scanf("%d",&numero);
                voto=numero/1000;
		if(voto==13){
			contpt++;
		}			   
    	 if(voto==14){
    	 	contptb++;
		 }
		 if(voto==15){
		 	contpmdb++;
		 }
		 if(voto==25){
		 	contdem++;
		 }  
		 if(voto==45){
		 	contpsdb++;
		 }
		 else if (voto==65){
		 	contpcdob++;
		 }
	}
printf("o PT elegel %d candidatos\n o ptb %d\n o pmdb %d\n o dem %d\n o psdb %d\n o pcdob %d",contpt,contptb,contpmdb,contdem,contpsdb,contpcdob);
   
getch();





}
