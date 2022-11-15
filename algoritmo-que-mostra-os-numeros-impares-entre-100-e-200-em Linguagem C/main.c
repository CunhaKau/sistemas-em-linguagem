#include <stdio.h>
#include <stdlib.h>

/* 
Elabore um algoritmo que gere e escreva os números ímpares dos números 
entre 100 e 200.
 */

int main(int argc, char *argv[]) {
	int cont;
	int resto;
	//faça ate x a y 
	for(cont=100; cont<=200; cont++){
		resto = cont % 2; // modulo e o resto da divisao inteiro 
		if(resto==1){
			printf("%d \n", cont);	
		}	
	}
	
	//outra forma 
	for(cont=99; cont<=200; cont+=2){
		printf("%d \n", cont);	
	}
	
	
	return 0;
}
