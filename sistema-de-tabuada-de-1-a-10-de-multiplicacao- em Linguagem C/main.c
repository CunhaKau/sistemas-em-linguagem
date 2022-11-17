#include <stdio.h>
#include <stdlib.h>

/* 
Faça um algoritmo que dado valor inteiro informado,
calcule e exiba a tabuada do numero de 1 a 10
*/

int main(int argc, char *argv[]) {
	int cont = 1;
	int numero, produto;
	printf("Informe a tabuada:");
	scanf("%d", &numero);	
		
	//enquanto faça 0...N
	while(cont<=10){
		produto = cont * numero;		
		printf("%d x %d = %d \n", numero, cont, produto);
		cont++;
	}
	
	return 0;
}
