#include <stdio.h>
#include <stdlib.h>

//1-Reescreva o algoritmo de busca sequencial usando recursão


int buscaSequencial(int x, int n, int v[]) {
 if (n == 0) return -1;
 if (x == v[n-1]) return n-1;
 return buscaSequencial( x, n-1, v);

}

int main(int argc, char *argv[]) {
	int vet[] = {3,5,7,1,27,9,13,6,17,23};
	int n =  sizeof(vet)/sizeof(int);
	int pos = buscaSequencial(27,n,vet);
	if(pos==-1){
		printf("\nnao encontrado!\n");
	} else {
		printf("\nValor encontrado = %i na posicao = %i\n", vet[pos], pos);
	}
	return 0;
}

