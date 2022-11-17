#include <stdio.h>
#include <stdlib.h>

int main (){
	int n, mult=1, soma=0;
	printf("\nEntre o numero em decimal: ");
	scanf("%d", &n);
	while( n > 0)
	{	soma = soma + (n%2)*mult;
		printf("%d . ", n%2);
		printf("%d\n", mult);
		n= n/2;
		mult = mult * 10;
	}
	printf("\nConversao em binario = %d\n", soma);
	return 0;}
	

