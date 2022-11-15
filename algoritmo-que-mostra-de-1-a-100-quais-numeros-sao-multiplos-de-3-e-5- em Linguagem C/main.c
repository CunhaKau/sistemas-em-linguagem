#include <stdio.h>
#include <stdlib.h>

/* 
7- Faça um algoritmo que conte de 1 a 100 
e a cada múltiplo de 3 e 5 simultaneamente 
emita uma mensagem:  “Múltiplo de 3 e 5”.
*/

int main(int argc, char *argv[]) {
	int resto3, resto5, i;
	for(i=0; i<100; i++){
		resto3 = i % 3;
		resto5 = i % 5;
		if(resto3==0 && resto5==0){
			printf("multiplo 3 e 5=%d\n",i);	
		}		
	}
	
	return 0;
}
