#include <stdio.h>
#include <stdlib.h>

/*2-Crie um algoritmo de busca binaria, mas 
antes faça a ordenação do vetor utilizando alguma técnica apresentada na aula anterior*/


int buscaBinaria(int c, int n, int *v){
	int meio, cmp, ini=0;
	int fim=n-1;
	while (ini <= fim) {
		meio=(ini+fim)/2;
		cmp = compInt(c,v[meio]);
		if (cmp < 0) {
			printf("<");
			fim=meio-1;
		} else {
			if (cmp > 0) {
				printf(">");
				ini=meio+1;
			} else {
				printf("!\n");
				return meio;
			}
		} 
	}
   return -1;
}


int compInt(int c, int b)
{
	if (c < b)
		return -1;
	else if (c > b)
		return 1;
	else
	return 0;
}

void selection_sort(int *v, int tamanho) { 
int i, j, min, aux;
    for (i = 0; i < (tamanho-1); i++) {
        min = i;
        for (j = (i+1); j < tamanho; j++) {
        if(v[j] < v[min]) min = j;
			}
        if (v[i] != v[min]) {
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
     }
    }
 }


int main(int argc, char *argv[]) {
	 int t[] = {2,5,9,23,1,10,6,7,42,4};
	 int tamanho = sizeof(t)/sizeof(int);


	  printf("\n\nOrdenacao selection sort >>>>>>\n");
	  selection_sort(t, tamanho);
	 int x =0;
	 for(x=0; x<tamanho; x++){
	   printf("%i\n\n", t[x]);    
	 }


	 int pos = buscaBinaria(42, tamanho, t);
	if(pos==-1){
		printf("\n numero nao encontrado!");
	} else {
		printf("Valor encontrado = %i na posicao = %i\n", t[pos], pos);
	}
	return 0;
}
