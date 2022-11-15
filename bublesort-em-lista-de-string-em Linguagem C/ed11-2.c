#include <stdio.h>
#include <stdlib.h>

/*2. Crie um programa que dado uma string, coloque as letras dela em ordem crescente pelo 
algoritmo de buble sort.*/

int buscaInt (int c, int n, int * v);
int compInt(int c, int b);
void bubbleSort(char *vetor, int tamanho);

int main(void) {
	 char vet[] = {'f','g', 'a','i', 't', 'r'};
	 int tamanho = sizeof(vet)/sizeof(char);
	 int x;
	 for(x=0; x<tamanho; x++){
	    printf("%i=> %c \n", x, vet[x]);    
	 }
	 
	 bubbleSort(vet, tamanho);
	 
	 for(x=0; x<tamanho; x++){
	    printf("\n%i => %c \n", x, vet[x]);    
	 }
	 return 0;
}

void bubbleSort(char *vetor, int tamanho){
	char aux;
	int i, j;
	for(j=tamanho-1; j>=1; j--){
		for(i=0;i<j;i++){
		printf("\ni=%i, j=%i, vetor[i]=%c \n", i, j, vetor[i]);
		if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
		}
	}
}



