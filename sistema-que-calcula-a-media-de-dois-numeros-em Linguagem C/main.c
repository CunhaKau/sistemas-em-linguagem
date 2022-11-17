#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int continua = 0;
	float n1, n2, m;
	//FAÇA ENQUANTO - 1 a N Repetições 
	do{		
		printf("Informe n1:");
		scanf("%f", &n1);
		printf("Informe n2:");
		scanf("%f", &n2);
		m = (n1 + n2)/2;
		printf("media=%f\n", m);
		
		printf("deseja continuar ? 1-sim 0-nao:\n");
		scanf("%d",&continua);			
	}while(continua==1);  	
	return 0;	
}
