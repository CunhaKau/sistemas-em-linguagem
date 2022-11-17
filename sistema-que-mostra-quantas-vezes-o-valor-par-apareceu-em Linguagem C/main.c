#include <stdio.h>
#include <stdlib.h>

/* 
5- Crie um laço e verifique qual a maior 
sequencia de números pares informados, o
laço fara 10 iterações.
Exe:   1,2,3,4,6,8,5,3,2,5,8,4,0 
Sequencia :  4,6,8   O programa vai retornar: 3
 */

int main(int argc, char *argv[]) {
	int x, seq=0, maiorSeq=0, numero, resto;
	
	for(x=0; x<10; x++){
		printf("Informe um numero:");
		scanf("%d", &numero);	
		resto = numero %2;
		if(resto==0){
			seq++; 
			if(seq > maiorSeq){
				maiorSeq = seq;		
			}
		} else {			
			seq=0;
		}		
	}
	printf("Maior sequencia=%d", maiorSeq);
	
	return 0;
}
