#include <stdio.h>
#include <stdlib.h>

/*4-Crie um programa que dado uma string, coloque as letras dela em ordem crescente pelo
algoritmo quicksort.*/

int buscaInt(int c, int n, int *v);
int compInt(int c, int b);
void quick_sort(char *a, int left, int right);


int main(int argc, char *argv[]) {
	 char vet[] = {'e', 's', 't', 'i','o', 'p'};
	 int tamanho = sizeof(vet)/sizeof(char);
	 int x;	 
	 for(x=0; x<tamanho; x++){
	    printf("%i => %c\n", x, vet[x]);    
	 }
	 quick_sort(vet, 0, tamanho - 1); 
	 
     for(x=0; x<tamanho; x++){
	    printf("%i => %c\n", x, vet[x]);  
}
return 0;
}

void quick_sort(char *a, int left, int right) {
    int i, j, x, y;     
    i = left;
    j = right;
    x = a[(left + right) / 2];     
    printf("left=%i, right=%i, x=%i \n", i, j, x);
     while(i <= j) {
        while(a[i] < x && i < right) { 
            i++;
        }
        while(a[j] > x && j > left) { 
            j--;
        }
	if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
    if(j > left) {
        quick_sort(a, left, j); 
    }
    if(i < right) {
        quick_sort(a, i, right); 
    }
}



