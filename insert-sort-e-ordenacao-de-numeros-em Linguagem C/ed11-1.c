#include <stdio.h>
#include <conio.h>

/*1-Faça um programa que leia 5 numeros inserindo-os em uma lista de forma 
ordenada utilizando a ideia do algoritmo de insert sort. No final, o programa 
deve mostrar todos os numeros ordenados */

void insertionSort( int *v, int tamanho ) 
{
	int i= 0;
	int j= 1;
	int aux = 0;
	while (j < tamanho) {
		aux = v[j];
		i = j - 1;
	    while ((i >= 0) && (v[i] > aux)) {
			v[i + 1] = v[i];
			i = i - 1;
			printf("\naux=%i v[i]=%i\n", aux, v[i]);
		}
		v[i + 1] = aux;
		j = j + 1;
	}
 }



int main(void) {
	 int numeros[5];
	 int x;
	 for(x=0; x<5; x++){
	    printf("Informe um numero: ");
		scanf("%i", &numeros[x]);    
	 }
	 
	 	 
	 insertionSort(numeros, 5);
	  for(x=0; x<5; x++){
	  	printf("%i => %i\n", x, numeros[x]);
}
return 0;
}
