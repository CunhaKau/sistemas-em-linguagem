#include <stdio.h>
#include <stdlib.h>

/* 
3- Faça um laço que calcule a media de todos os números 
informados, 
a condição de termino do laço e quando for digitado ZERO
*/

int main(int argc, char *argv[]) {
	float media=0, numero;
	int contador=0;
	//comando de rep. indeterminado 1..N
	do{
		printf("Informe um numero para achar a media dos numeros, \na condicao para o termino do laco eh zero:");
		scanf("%f", &numero);
		if(numero != 0){
			media = media + numero;
			contador++;		
		}		
	} while(numero!=0);	
	media = media / contador;
	printf("A media de %d numeros = %f", contador, media);
	
	return 0;
}
