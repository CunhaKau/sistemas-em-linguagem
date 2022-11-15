#include <stdio.h>
#include <stdlib.h>

/* 
Crie dois vetores do tipo inteiro com a capacidade de 10 
posições, leia números que serão armazenados sequencialmente
no primeiro vetor, faça um novo laço que armazene 
no segundo vetor o valor do primeiro multiplicado 
por 2 quando o índice for par, 
e multiplique por 3 quando o índice for impar.
*/

int main(int argc, char *argv[]) {
	int vetorA[10], vetorB[10];
	int x, resto;
	for(x=0;x<10;x++){
		printf("Informe o numero[%d]=",x);
		scanf("%d", &vetorA[x]);
		resto = x % 2;
		if(resto==0){
			vetorB[x]=vetorA[x]*2;	
		} else {
			vetorB[x]=vetorA[x]*3;	
		}		
		printf("a[%d]=%d,b[%d]=%d\n",x,vetorA[x],x,vetorB[x]);
	}
	
	return 0;
}
